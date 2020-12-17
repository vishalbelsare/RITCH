#include "RITCH.h"

/**
 * @brief      Returns the lengths of a given message type
 *
 * @param[in]  msgType  The message type
 *
 * @return     The message length.
 */
int64_t getMessageLength(unsigned char msgType) {
  switch (msgType) {
  case 'S': return ITCH::SIZE::S;
  case 'R': return ITCH::SIZE::R;
  case 'H': return ITCH::SIZE::H;
  case 'Y': return ITCH::SIZE::Y;
  case 'L': return ITCH::SIZE::L;
  case 'V': return ITCH::SIZE::V;
  case 'W': return ITCH::SIZE::W;
  case 'K': return ITCH::SIZE::K;
  case 'J': return ITCH::SIZE::J;
  case 'h': return ITCH::SIZE::h;
  case 'A': return ITCH::SIZE::A;
  case 'F': return ITCH::SIZE::F;
  case 'E': return ITCH::SIZE::E;
  case 'C': return ITCH::SIZE::C;
  case 'X': return ITCH::SIZE::X;
  case 'D': return ITCH::SIZE::D;
  case 'U': return ITCH::SIZE::U;
  case 'P': return ITCH::SIZE::P;
  case 'Q': return ITCH::SIZE::Q;
  case 'B': return ITCH::SIZE::B;
  case 'I': return ITCH::SIZE::I;
  case 'N': return ITCH::SIZE::N;
  default: Rcpp::Rcout << "Unkown Message Type\n";
  return 1;
  }
}

/**
 * @brief      Gets the message position for a given messageType
 *
 * @param[in]  msgType  The message type
 *
 * @return     The message position.
 */
int getMessagePosition(unsigned char msgType) {
  switch (msgType) {
  case 'S': return 0;
  case 'R': return 1;
  case 'H': return 2;
  case 'Y': return 3;
  case 'L': return 4;
  case 'V': return 5;
  case 'W': return 6;
  case 'K': return 7;
  case 'J': return 8;
  case 'h': return 9;
  case 'A': return 10;
  case 'F': return 11;
  case 'E': return 12;
  case 'C': return 13;
  case 'X': return 14;
  case 'D': return 15;
  case 'U': return 16;
  case 'P': return 17;
  case 'Q': return 18;
  case 'B': return 19;
  case 'I': return 20;
  case 'N': return 21;
  default: Rcpp::Rcout << "Unkown Message Type\n";
  return 0;
  }
}

// helper functions that check if a buffer value is in a vector of filters (equivalent of Rs %in%)
inline bool passes_filter(unsigned char* buf, std::vector<char> filter) {
  if (filter.size() == 0) return true;
  for (char cc : filter) if (cc == *buf) return true;
  return false;
}
inline bool passes_filter(unsigned char* buf, std::vector<int> filter) {
  if (filter.size() == 0) return true;
  const int val = get2bytes(&buf[0]);
  for (int cc : filter) if (cc == val) return true;
  return false;
}
// check larger/smaller inclusive for 8 byte numbers (timestamp)
inline bool passes_filter_in(unsigned char* buf, std::vector<int64_t> lower, std::vector<int64_t> upper) {
  if (lower.size() == 0) return true;
  const int64_t val = get6bytes(&buf[0]);
  for (int i = 0; i < lower.size(); i++) if (val >= lower[i] && val <= upper[i]) return true;
  return false;
}
/**
 * @brief      Loads the contents of a plain-text file into a MessageType
 *
 * @param[in]  filename       The filename to the plain-text file
 * @param      msg            The messagetype, or a subtype of it, which holds the information
 * @param[in]  startMsgCount  The start message count, the message (order) count at which we 
 *                              start to save the messages, the defaults to 0 (first message)
 * @param[in]  endMsgCount    The end message count, the message count at which we stop to 
 *                              stop to save the messages, defaults to 0, which will be 
 *                              substituted to all messages
 * @param[in]  bufferSize     The buffer size in bytes, defaults to 100MB
 * @param[in]  quiet          If true, no status message is printed, defaults to false
 */
void loadToMessages(std::string filename, 
                    MessageType& msg,
                    int64_t startMsgCount,
                    int64_t endMsgCount,
                    std::vector<char> msgFilter,
                    std::vector<int> locFilter,
                    std::vector<int64_t> minTS,
                    std::vector<int64_t> maxTS,
                    int64_t bufferSize,
                    bool quiet) {

  msg.setBoundaries(startMsgCount, endMsgCount);
  
  // Open the file
  FILE* infile;
  infile = fopen(filename.c_str(), "rb");
  if (infile == NULL) {
    Rcpp::stop("File Error!\n");
  }
  
  unsigned char* bufferPtr;
  int64_t bufferCharSize = sizeof(char) * bufferSize;
  bufferPtr = (unsigned char*) malloc(bufferCharSize);
  
  int64_t thisBufferSize = 0;
  int64_t curFilePtr;
  
  // fill the buffer
  while ((thisBufferSize = fread(bufferPtr, 1, bufferCharSize, infile)) > 0) {
    if (!quiet) Rcpp::Rcout << ".";
    Rcpp::checkUserInterrupt();
    
    // find the byte number, where file-pointer currently points to 
    curFilePtr = ftell(infile);
    
    // use the current buffer to read in the messages
    int64_t inBufferIdx = 2;
    int64_t thisMsgLength;
    
    // loop through the buffer by the index inBufferIdx
    while (1) {
      // if there is no partial message, this will be triggered
      if (inBufferIdx >= thisBufferSize) break;
      
      thisMsgLength = getMessageLength(bufferPtr[inBufferIdx]);
      // if there is a partial message, go to the next buffer (gz-file pointer will be reset to match this!)
      if (inBufferIdx > thisBufferSize - thisMsgLength) break;

      // Check Filter Messages
      bool parse_message = true;
      // only check the filter if previous tests are all OK
      if (parse_message) parse_message = passes_filter(&bufferPtr[inBufferIdx], msgFilter);
      if (parse_message) parse_message = passes_filter(&bufferPtr[inBufferIdx + 1], locFilter);
      if (parse_message) parse_message = passes_filter_in(&bufferPtr[inBufferIdx + 5], minTS, maxTS);

      
      // try to load the message only if the filters passed
      if (parse_message && !msg.loadMessage(&bufferPtr[inBufferIdx])) {
        // loadMessage returns false if the endMsgCount has been reached, no need to continue
        free(bufferPtr);
        fclose(infile);
        return;
      }
      
      // increase the index in the buffer
      inBufferIdx += thisMsgLength; 
      // two empty strings after each message...
      inBufferIdx += 2;
    }
    
    // if the message doesn't fit, a new buffer will not solve the issue, as there is too little information for the given msg-length
    if (inBufferIdx == 0) break;
    
    // reset the current fileptr if needed
    // clear the remaining bits, the last partial message might be cut in two, thus reset the gz-file pointer
    // remaining bits of the last message: curFilePtr - thisBufferSize + inBufferIdx - 2
    if (thisBufferSize != inBufferIdx) {
      // std::cout << "reset to " << curFilePtr - thisBufferSize + inBufferIdx - 2 << "\n";
      fseek(infile, curFilePtr - thisBufferSize + inBufferIdx - 2, SEEK_SET);
    } else {
      // if the message perfectly ends, still set it back by 2, otherwise 2 bytes are skipped!
      fseek(infile, curFilePtr - 2, SEEK_SET);
    }
  }
  
  free(bufferPtr);
  fclose(infile);
}

/*
 * @brief      Formats an integer number to a std::string with thousands separator
 *
 * @param      num    The number to format
 * @param      sep    The thousands separator, default value is a comma  
 * @param      s      The return string, this is only used internally, as the function
 *                    is called recursively
 *                    
 * @return       The number as a string
 */
std::string formatThousands(int64_t num, const std::string sep, std::string s) {
  if (num < 1000) {
    return std::to_string(num) + s;
  } else {
    std::string last_three = std::to_string(num % 1000);
    const int num_zeros = 3 - last_three.length();
    last_three = std::string(num_zeros, '0').append(last_three);
    
    const int64_t remainder = (int64_t) num / 1000;
    std::string res = sep + last_three + s;
    return formatThousands(remainder, sep, res);
  }
}


/**
 * @brief      Counts the number of message by a given type (char) into a given vector
 *
 * @param      count  The vector which holds the counts for each message type
 * @param[in]  msg    The message-type given by a character
 */
void countMessageByType(std::vector<int64_t>& count, unsigned char msg) {
  switch(msg) {
  case 'S': 
    count[ITCH::POS::S]++;
    break;
  case 'R':
    count[ITCH::POS::R]++;
    break;
  case 'H':
    count[ITCH::POS::H]++;
    break;
  case 'Y':
    count[ITCH::POS::Y]++;
    break;
  case 'L':
    count[ITCH::POS::L]++;
    break;
  case 'V':
    count[ITCH::POS::V]++;
    break;
  case 'W':
    count[ITCH::POS::W]++;
    break;
  case 'K':
    count[ITCH::POS::K]++;
    break;
  case 'J':
    count[ITCH::POS::J]++;
    break;
  case 'h':
    count[ITCH::POS::h]++;
    break;
  case 'A':
    count[ITCH::POS::A]++;
    break;
  case 'F':
    count[ITCH::POS::F]++;
    break;
  case 'E':
    count[ITCH::POS::E]++;
    break;
  case 'C':
    count[ITCH::POS::C]++;
    break;
  case 'X':
    count[ITCH::POS::X]++;
    break;
  case 'D':
    count[ITCH::POS::D]++;
    break;
  case 'U':
    count[ITCH::POS::U]++;
    break;
  case 'P':
    count[ITCH::POS::P]++;
    break;
  case 'Q':
    count[ITCH::POS::Q]++;
    break;
  case 'B':
    count[ITCH::POS::B]++;
    break;
  case 'I':
    count[ITCH::POS::I]++;
    break;
  case 'N':
    count[ITCH::POS::N]++;
    break;
  default:
    Rcpp::Rcout << "Unknown Case!\n";
  break;
  }
}
