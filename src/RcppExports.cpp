// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// count_messages_impl
Rcpp::NumericVector count_messages_impl(std::string filename, int64_t max_buffer_size, bool quiet);
RcppExport SEXP _RITCH_count_messages_impl(SEXP filenameSEXP, SEXP max_buffer_sizeSEXP, SEXP quietSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< int64_t >::type max_buffer_size(max_buffer_sizeSEXP);
    Rcpp::traits::input_parameter< bool >::type quiet(quietSEXP);
    rcpp_result_gen = Rcpp::wrap(count_messages_impl(filename, max_buffer_size, quiet));
    return rcpp_result_gen;
END_RCPP
}
// show_diff
void show_diff(Rcpp::CharacterVector x);
RcppExport SEXP _RITCH_show_diff(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type x(xSEXP);
    show_diff(x);
    return R_NilValue;
END_RCPP
}
// getMessageCountDF
Rcpp::DataFrame getMessageCountDF(std::string filename, int64_t bufferSize, bool quiet);
RcppExport SEXP _RITCH_getMessageCountDF(SEXP filenameSEXP, SEXP bufferSizeSEXP, SEXP quietSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< int64_t >::type bufferSize(bufferSizeSEXP);
    Rcpp::traits::input_parameter< bool >::type quiet(quietSEXP);
    rcpp_result_gen = Rcpp::wrap(getMessageCountDF(filename, bufferSize, quiet));
    return rcpp_result_gen;
END_RCPP
}
// getOrders_impl
Rcpp::DataFrame getOrders_impl(std::string filename, int64_t startMsgCount, int64_t endMsgCount, Rcpp::CharacterVector filterMsgType, Rcpp::IntegerVector filterLocCode, Rcpp::NumericVector minTimestamp, Rcpp::NumericVector maxTimestamp, int64_t bufferSize, bool quiet);
RcppExport SEXP _RITCH_getOrders_impl(SEXP filenameSEXP, SEXP startMsgCountSEXP, SEXP endMsgCountSEXP, SEXP filterMsgTypeSEXP, SEXP filterLocCodeSEXP, SEXP minTimestampSEXP, SEXP maxTimestampSEXP, SEXP bufferSizeSEXP, SEXP quietSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< int64_t >::type startMsgCount(startMsgCountSEXP);
    Rcpp::traits::input_parameter< int64_t >::type endMsgCount(endMsgCountSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type filterMsgType(filterMsgTypeSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type filterLocCode(filterLocCodeSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type minTimestamp(minTimestampSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type maxTimestamp(maxTimestampSEXP);
    Rcpp::traits::input_parameter< int64_t >::type bufferSize(bufferSizeSEXP);
    Rcpp::traits::input_parameter< bool >::type quiet(quietSEXP);
    rcpp_result_gen = Rcpp::wrap(getOrders_impl(filename, startMsgCount, endMsgCount, filterMsgType, filterLocCode, minTimestamp, maxTimestamp, bufferSize, quiet));
    return rcpp_result_gen;
END_RCPP
}
// getTrades_impl
Rcpp::DataFrame getTrades_impl(std::string filename, int64_t startMsgCount, int64_t endMsgCount, Rcpp::CharacterVector filterMsgType, Rcpp::IntegerVector filterLocCode, Rcpp::NumericVector minTimestamp, Rcpp::NumericVector maxTimestamp, int64_t bufferSize, bool quiet);
RcppExport SEXP _RITCH_getTrades_impl(SEXP filenameSEXP, SEXP startMsgCountSEXP, SEXP endMsgCountSEXP, SEXP filterMsgTypeSEXP, SEXP filterLocCodeSEXP, SEXP minTimestampSEXP, SEXP maxTimestampSEXP, SEXP bufferSizeSEXP, SEXP quietSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< int64_t >::type startMsgCount(startMsgCountSEXP);
    Rcpp::traits::input_parameter< int64_t >::type endMsgCount(endMsgCountSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type filterMsgType(filterMsgTypeSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type filterLocCode(filterLocCodeSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type minTimestamp(minTimestampSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type maxTimestamp(maxTimestampSEXP);
    Rcpp::traits::input_parameter< int64_t >::type bufferSize(bufferSizeSEXP);
    Rcpp::traits::input_parameter< bool >::type quiet(quietSEXP);
    rcpp_result_gen = Rcpp::wrap(getTrades_impl(filename, startMsgCount, endMsgCount, filterMsgType, filterLocCode, minTimestamp, maxTimestamp, bufferSize, quiet));
    return rcpp_result_gen;
END_RCPP
}
// getModifications_impl
Rcpp::DataFrame getModifications_impl(std::string filename, int64_t startMsgCount, int64_t endMsgCount, Rcpp::CharacterVector filterMsgType, Rcpp::IntegerVector filterLocCode, Rcpp::NumericVector minTimestamp, Rcpp::NumericVector maxTimestamp, int64_t bufferSize, bool quiet);
RcppExport SEXP _RITCH_getModifications_impl(SEXP filenameSEXP, SEXP startMsgCountSEXP, SEXP endMsgCountSEXP, SEXP filterMsgTypeSEXP, SEXP filterLocCodeSEXP, SEXP minTimestampSEXP, SEXP maxTimestampSEXP, SEXP bufferSizeSEXP, SEXP quietSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< int64_t >::type startMsgCount(startMsgCountSEXP);
    Rcpp::traits::input_parameter< int64_t >::type endMsgCount(endMsgCountSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type filterMsgType(filterMsgTypeSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type filterLocCode(filterLocCodeSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type minTimestamp(minTimestampSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type maxTimestamp(maxTimestampSEXP);
    Rcpp::traits::input_parameter< int64_t >::type bufferSize(bufferSizeSEXP);
    Rcpp::traits::input_parameter< bool >::type quiet(quietSEXP);
    rcpp_result_gen = Rcpp::wrap(getModifications_impl(filename, startMsgCount, endMsgCount, filterMsgType, filterLocCode, minTimestamp, maxTimestamp, bufferSize, quiet));
    return rcpp_result_gen;
END_RCPP
}
// getSystemEvents_impl
Rcpp::DataFrame getSystemEvents_impl(std::string filename, int64_t startMsgCount, int64_t endMsgCount, Rcpp::CharacterVector filterMsgType, Rcpp::IntegerVector filterLocCode, Rcpp::NumericVector minTimestamp, Rcpp::NumericVector maxTimestamp, int64_t bufferSize, bool quiet);
RcppExport SEXP _RITCH_getSystemEvents_impl(SEXP filenameSEXP, SEXP startMsgCountSEXP, SEXP endMsgCountSEXP, SEXP filterMsgTypeSEXP, SEXP filterLocCodeSEXP, SEXP minTimestampSEXP, SEXP maxTimestampSEXP, SEXP bufferSizeSEXP, SEXP quietSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< int64_t >::type startMsgCount(startMsgCountSEXP);
    Rcpp::traits::input_parameter< int64_t >::type endMsgCount(endMsgCountSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type filterMsgType(filterMsgTypeSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type filterLocCode(filterLocCodeSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type minTimestamp(minTimestampSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type maxTimestamp(maxTimestampSEXP);
    Rcpp::traits::input_parameter< int64_t >::type bufferSize(bufferSizeSEXP);
    Rcpp::traits::input_parameter< bool >::type quiet(quietSEXP);
    rcpp_result_gen = Rcpp::wrap(getSystemEvents_impl(filename, startMsgCount, endMsgCount, filterMsgType, filterLocCode, minTimestamp, maxTimestamp, bufferSize, quiet));
    return rcpp_result_gen;
END_RCPP
}
// getStockDirectory_impl
Rcpp::DataFrame getStockDirectory_impl(std::string filename, int64_t startMsgCount, int64_t endMsgCount, Rcpp::CharacterVector filterMsgType, Rcpp::IntegerVector filterLocCode, Rcpp::NumericVector minTimestamp, Rcpp::NumericVector maxTimestamp, int64_t bufferSize, bool quiet);
RcppExport SEXP _RITCH_getStockDirectory_impl(SEXP filenameSEXP, SEXP startMsgCountSEXP, SEXP endMsgCountSEXP, SEXP filterMsgTypeSEXP, SEXP filterLocCodeSEXP, SEXP minTimestampSEXP, SEXP maxTimestampSEXP, SEXP bufferSizeSEXP, SEXP quietSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< int64_t >::type startMsgCount(startMsgCountSEXP);
    Rcpp::traits::input_parameter< int64_t >::type endMsgCount(endMsgCountSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type filterMsgType(filterMsgTypeSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type filterLocCode(filterLocCodeSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type minTimestamp(minTimestampSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type maxTimestamp(maxTimestampSEXP);
    Rcpp::traits::input_parameter< int64_t >::type bufferSize(bufferSizeSEXP);
    Rcpp::traits::input_parameter< bool >::type quiet(quietSEXP);
    rcpp_result_gen = Rcpp::wrap(getStockDirectory_impl(filename, startMsgCount, endMsgCount, filterMsgType, filterLocCode, minTimestamp, maxTimestamp, bufferSize, quiet));
    return rcpp_result_gen;
END_RCPP
}
// getTradingStatus_impl
Rcpp::DataFrame getTradingStatus_impl(std::string filename, int64_t startMsgCount, int64_t endMsgCount, Rcpp::CharacterVector filterMsgType, Rcpp::IntegerVector filterLocCode, Rcpp::NumericVector minTimestamp, Rcpp::NumericVector maxTimestamp, int64_t bufferSize, bool quiet);
RcppExport SEXP _RITCH_getTradingStatus_impl(SEXP filenameSEXP, SEXP startMsgCountSEXP, SEXP endMsgCountSEXP, SEXP filterMsgTypeSEXP, SEXP filterLocCodeSEXP, SEXP minTimestampSEXP, SEXP maxTimestampSEXP, SEXP bufferSizeSEXP, SEXP quietSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< int64_t >::type startMsgCount(startMsgCountSEXP);
    Rcpp::traits::input_parameter< int64_t >::type endMsgCount(endMsgCountSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type filterMsgType(filterMsgTypeSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type filterLocCode(filterLocCodeSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type minTimestamp(minTimestampSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type maxTimestamp(maxTimestampSEXP);
    Rcpp::traits::input_parameter< int64_t >::type bufferSize(bufferSizeSEXP);
    Rcpp::traits::input_parameter< bool >::type quiet(quietSEXP);
    rcpp_result_gen = Rcpp::wrap(getTradingStatus_impl(filename, startMsgCount, endMsgCount, filterMsgType, filterLocCode, minTimestamp, maxTimestamp, bufferSize, quiet));
    return rcpp_result_gen;
END_RCPP
}
// getRegSHO_impl
Rcpp::DataFrame getRegSHO_impl(std::string filename, int64_t startMsgCount, int64_t endMsgCount, Rcpp::CharacterVector filterMsgType, Rcpp::IntegerVector filterLocCode, Rcpp::NumericVector minTimestamp, Rcpp::NumericVector maxTimestamp, int64_t bufferSize, bool quiet);
RcppExport SEXP _RITCH_getRegSHO_impl(SEXP filenameSEXP, SEXP startMsgCountSEXP, SEXP endMsgCountSEXP, SEXP filterMsgTypeSEXP, SEXP filterLocCodeSEXP, SEXP minTimestampSEXP, SEXP maxTimestampSEXP, SEXP bufferSizeSEXP, SEXP quietSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< int64_t >::type startMsgCount(startMsgCountSEXP);
    Rcpp::traits::input_parameter< int64_t >::type endMsgCount(endMsgCountSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type filterMsgType(filterMsgTypeSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type filterLocCode(filterLocCodeSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type minTimestamp(minTimestampSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type maxTimestamp(maxTimestampSEXP);
    Rcpp::traits::input_parameter< int64_t >::type bufferSize(bufferSizeSEXP);
    Rcpp::traits::input_parameter< bool >::type quiet(quietSEXP);
    rcpp_result_gen = Rcpp::wrap(getRegSHO_impl(filename, startMsgCount, endMsgCount, filterMsgType, filterLocCode, minTimestamp, maxTimestamp, bufferSize, quiet));
    return rcpp_result_gen;
END_RCPP
}
// getParticipantStates_impl
Rcpp::DataFrame getParticipantStates_impl(std::string filename, int64_t startMsgCount, int64_t endMsgCount, Rcpp::CharacterVector filterMsgType, Rcpp::IntegerVector filterLocCode, Rcpp::NumericVector minTimestamp, Rcpp::NumericVector maxTimestamp, int64_t bufferSize, bool quiet);
RcppExport SEXP _RITCH_getParticipantStates_impl(SEXP filenameSEXP, SEXP startMsgCountSEXP, SEXP endMsgCountSEXP, SEXP filterMsgTypeSEXP, SEXP filterLocCodeSEXP, SEXP minTimestampSEXP, SEXP maxTimestampSEXP, SEXP bufferSizeSEXP, SEXP quietSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< int64_t >::type startMsgCount(startMsgCountSEXP);
    Rcpp::traits::input_parameter< int64_t >::type endMsgCount(endMsgCountSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type filterMsgType(filterMsgTypeSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type filterLocCode(filterLocCodeSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type minTimestamp(minTimestampSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type maxTimestamp(maxTimestampSEXP);
    Rcpp::traits::input_parameter< int64_t >::type bufferSize(bufferSizeSEXP);
    Rcpp::traits::input_parameter< bool >::type quiet(quietSEXP);
    rcpp_result_gen = Rcpp::wrap(getParticipantStates_impl(filename, startMsgCount, endMsgCount, filterMsgType, filterLocCode, minTimestamp, maxTimestamp, bufferSize, quiet));
    return rcpp_result_gen;
END_RCPP
}
// getMWCB_impl
Rcpp::DataFrame getMWCB_impl(std::string filename, int64_t startMsgCount, int64_t endMsgCount, Rcpp::CharacterVector filterMsgType, Rcpp::IntegerVector filterLocCode, Rcpp::NumericVector minTimestamp, Rcpp::NumericVector maxTimestamp, int64_t bufferSize, bool quiet);
RcppExport SEXP _RITCH_getMWCB_impl(SEXP filenameSEXP, SEXP startMsgCountSEXP, SEXP endMsgCountSEXP, SEXP filterMsgTypeSEXP, SEXP filterLocCodeSEXP, SEXP minTimestampSEXP, SEXP maxTimestampSEXP, SEXP bufferSizeSEXP, SEXP quietSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< int64_t >::type startMsgCount(startMsgCountSEXP);
    Rcpp::traits::input_parameter< int64_t >::type endMsgCount(endMsgCountSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type filterMsgType(filterMsgTypeSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type filterLocCode(filterLocCodeSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type minTimestamp(minTimestampSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type maxTimestamp(maxTimestampSEXP);
    Rcpp::traits::input_parameter< int64_t >::type bufferSize(bufferSizeSEXP);
    Rcpp::traits::input_parameter< bool >::type quiet(quietSEXP);
    rcpp_result_gen = Rcpp::wrap(getMWCB_impl(filename, startMsgCount, endMsgCount, filterMsgType, filterLocCode, minTimestamp, maxTimestamp, bufferSize, quiet));
    return rcpp_result_gen;
END_RCPP
}
// getIPO_impl
Rcpp::DataFrame getIPO_impl(std::string filename, int64_t startMsgCount, int64_t endMsgCount, Rcpp::CharacterVector filterMsgType, Rcpp::IntegerVector filterLocCode, Rcpp::NumericVector minTimestamp, Rcpp::NumericVector maxTimestamp, int64_t bufferSize, bool quiet);
RcppExport SEXP _RITCH_getIPO_impl(SEXP filenameSEXP, SEXP startMsgCountSEXP, SEXP endMsgCountSEXP, SEXP filterMsgTypeSEXP, SEXP filterLocCodeSEXP, SEXP minTimestampSEXP, SEXP maxTimestampSEXP, SEXP bufferSizeSEXP, SEXP quietSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< int64_t >::type startMsgCount(startMsgCountSEXP);
    Rcpp::traits::input_parameter< int64_t >::type endMsgCount(endMsgCountSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type filterMsgType(filterMsgTypeSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type filterLocCode(filterLocCodeSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type minTimestamp(minTimestampSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type maxTimestamp(maxTimestampSEXP);
    Rcpp::traits::input_parameter< int64_t >::type bufferSize(bufferSizeSEXP);
    Rcpp::traits::input_parameter< bool >::type quiet(quietSEXP);
    rcpp_result_gen = Rcpp::wrap(getIPO_impl(filename, startMsgCount, endMsgCount, filterMsgType, filterLocCode, minTimestamp, maxTimestamp, bufferSize, quiet));
    return rcpp_result_gen;
END_RCPP
}
// getLULD_impl
Rcpp::DataFrame getLULD_impl(std::string filename, int64_t startMsgCount, int64_t endMsgCount, Rcpp::CharacterVector filterMsgType, Rcpp::IntegerVector filterLocCode, Rcpp::NumericVector minTimestamp, Rcpp::NumericVector maxTimestamp, int64_t bufferSize, bool quiet);
RcppExport SEXP _RITCH_getLULD_impl(SEXP filenameSEXP, SEXP startMsgCountSEXP, SEXP endMsgCountSEXP, SEXP filterMsgTypeSEXP, SEXP filterLocCodeSEXP, SEXP minTimestampSEXP, SEXP maxTimestampSEXP, SEXP bufferSizeSEXP, SEXP quietSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< int64_t >::type startMsgCount(startMsgCountSEXP);
    Rcpp::traits::input_parameter< int64_t >::type endMsgCount(endMsgCountSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type filterMsgType(filterMsgTypeSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type filterLocCode(filterLocCodeSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type minTimestamp(minTimestampSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type maxTimestamp(maxTimestampSEXP);
    Rcpp::traits::input_parameter< int64_t >::type bufferSize(bufferSizeSEXP);
    Rcpp::traits::input_parameter< bool >::type quiet(quietSEXP);
    rcpp_result_gen = Rcpp::wrap(getLULD_impl(filename, startMsgCount, endMsgCount, filterMsgType, filterLocCode, minTimestamp, maxTimestamp, bufferSize, quiet));
    return rcpp_result_gen;
END_RCPP
}
// getNOII_impl
Rcpp::DataFrame getNOII_impl(std::string filename, int64_t startMsgCount, int64_t endMsgCount, Rcpp::CharacterVector filterMsgType, Rcpp::IntegerVector filterLocCode, Rcpp::NumericVector minTimestamp, Rcpp::NumericVector maxTimestamp, int64_t bufferSize, bool quiet);
RcppExport SEXP _RITCH_getNOII_impl(SEXP filenameSEXP, SEXP startMsgCountSEXP, SEXP endMsgCountSEXP, SEXP filterMsgTypeSEXP, SEXP filterLocCodeSEXP, SEXP minTimestampSEXP, SEXP maxTimestampSEXP, SEXP bufferSizeSEXP, SEXP quietSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< int64_t >::type startMsgCount(startMsgCountSEXP);
    Rcpp::traits::input_parameter< int64_t >::type endMsgCount(endMsgCountSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type filterMsgType(filterMsgTypeSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type filterLocCode(filterLocCodeSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type minTimestamp(minTimestampSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type maxTimestamp(maxTimestampSEXP);
    Rcpp::traits::input_parameter< int64_t >::type bufferSize(bufferSizeSEXP);
    Rcpp::traits::input_parameter< bool >::type quiet(quietSEXP);
    rcpp_result_gen = Rcpp::wrap(getNOII_impl(filename, startMsgCount, endMsgCount, filterMsgType, filterLocCode, minTimestamp, maxTimestamp, bufferSize, quiet));
    return rcpp_result_gen;
END_RCPP
}
// getRPII_impl
Rcpp::DataFrame getRPII_impl(std::string filename, int64_t startMsgCount, int64_t endMsgCount, Rcpp::CharacterVector filterMsgType, Rcpp::IntegerVector filterLocCode, Rcpp::NumericVector minTimestamp, Rcpp::NumericVector maxTimestamp, int64_t bufferSize, bool quiet);
RcppExport SEXP _RITCH_getRPII_impl(SEXP filenameSEXP, SEXP startMsgCountSEXP, SEXP endMsgCountSEXP, SEXP filterMsgTypeSEXP, SEXP filterLocCodeSEXP, SEXP minTimestampSEXP, SEXP maxTimestampSEXP, SEXP bufferSizeSEXP, SEXP quietSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< int64_t >::type startMsgCount(startMsgCountSEXP);
    Rcpp::traits::input_parameter< int64_t >::type endMsgCount(endMsgCountSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type filterMsgType(filterMsgTypeSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type filterLocCode(filterLocCodeSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type minTimestamp(minTimestampSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type maxTimestamp(maxTimestampSEXP);
    Rcpp::traits::input_parameter< int64_t >::type bufferSize(bufferSizeSEXP);
    Rcpp::traits::input_parameter< bool >::type quiet(quietSEXP);
    rcpp_result_gen = Rcpp::wrap(getRPII_impl(filename, startMsgCount, endMsgCount, filterMsgType, filterLocCode, minTimestamp, maxTimestamp, bufferSize, quiet));
    return rcpp_result_gen;
END_RCPP
}
// gunzipFile_impl
void gunzipFile_impl(std::string infile, std::string outfile, int64_t bufferSize);
RcppExport SEXP _RITCH_gunzipFile_impl(SEXP infileSEXP, SEXP outfileSEXP, SEXP bufferSizeSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type infile(infileSEXP);
    Rcpp::traits::input_parameter< std::string >::type outfile(outfileSEXP);
    Rcpp::traits::input_parameter< int64_t >::type bufferSize(bufferSizeSEXP);
    gunzipFile_impl(infile, outfile, bufferSize);
    return R_NilValue;
END_RCPP
}
// write_itch_impl
int64_t write_itch_impl(Rcpp::List ll, std::string filename, bool append, bool gz, size_t max_buffer_size, bool quiet);
RcppExport SEXP _RITCH_write_itch_impl(SEXP llSEXP, SEXP filenameSEXP, SEXP appendSEXP, SEXP gzSEXP, SEXP max_buffer_sizeSEXP, SEXP quietSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type ll(llSEXP);
    Rcpp::traits::input_parameter< std::string >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< bool >::type append(appendSEXP);
    Rcpp::traits::input_parameter< bool >::type gz(gzSEXP);
    Rcpp::traits::input_parameter< size_t >::type max_buffer_size(max_buffer_sizeSEXP);
    Rcpp::traits::input_parameter< bool >::type quiet(quietSEXP);
    rcpp_result_gen = Rcpp::wrap(write_itch_impl(ll, filename, append, gz, max_buffer_size, quiet));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_RITCH_count_messages_impl", (DL_FUNC) &_RITCH_count_messages_impl, 3},
    {"_RITCH_show_diff", (DL_FUNC) &_RITCH_show_diff, 1},
    {"_RITCH_getMessageCountDF", (DL_FUNC) &_RITCH_getMessageCountDF, 3},
    {"_RITCH_getOrders_impl", (DL_FUNC) &_RITCH_getOrders_impl, 9},
    {"_RITCH_getTrades_impl", (DL_FUNC) &_RITCH_getTrades_impl, 9},
    {"_RITCH_getModifications_impl", (DL_FUNC) &_RITCH_getModifications_impl, 9},
    {"_RITCH_getSystemEvents_impl", (DL_FUNC) &_RITCH_getSystemEvents_impl, 9},
    {"_RITCH_getStockDirectory_impl", (DL_FUNC) &_RITCH_getStockDirectory_impl, 9},
    {"_RITCH_getTradingStatus_impl", (DL_FUNC) &_RITCH_getTradingStatus_impl, 9},
    {"_RITCH_getRegSHO_impl", (DL_FUNC) &_RITCH_getRegSHO_impl, 9},
    {"_RITCH_getParticipantStates_impl", (DL_FUNC) &_RITCH_getParticipantStates_impl, 9},
    {"_RITCH_getMWCB_impl", (DL_FUNC) &_RITCH_getMWCB_impl, 9},
    {"_RITCH_getIPO_impl", (DL_FUNC) &_RITCH_getIPO_impl, 9},
    {"_RITCH_getLULD_impl", (DL_FUNC) &_RITCH_getLULD_impl, 9},
    {"_RITCH_getNOII_impl", (DL_FUNC) &_RITCH_getNOII_impl, 9},
    {"_RITCH_getRPII_impl", (DL_FUNC) &_RITCH_getRPII_impl, 9},
    {"_RITCH_gunzipFile_impl", (DL_FUNC) &_RITCH_gunzipFile_impl, 3},
    {"_RITCH_write_itch_impl", (DL_FUNC) &_RITCH_write_itch_impl, 6},
    {NULL, NULL, 0}
};

RcppExport void R_init_RITCH(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
