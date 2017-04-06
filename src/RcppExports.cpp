// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// convert2geno
IntegerMatrix convert2geno(const List xodat, const NumericVector map, const IntegerMatrix founder_geno);
RcppExport SEXP simcross_convert2geno(SEXP xodatSEXP, SEXP mapSEXP, SEXP founder_genoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List >::type xodat(xodatSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type map(mapSEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix >::type founder_geno(founder_genoSEXP);
    rcpp_result_gen = Rcpp::wrap(convert2geno(xodat, map, founder_geno));
    return rcpp_result_gen;
END_RCPP
}
// convert2genoarray
IntegerVector convert2genoarray(const List xodat, const NumericVector map);
RcppExport SEXP simcross_convert2genoarray(SEXP xodatSEXP, SEXP mapSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List >::type xodat(xodatSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type map(mapSEXP);
    rcpp_result_gen = Rcpp::wrap(convert2genoarray(xodat, map));
    return rcpp_result_gen;
END_RCPP
}
// convert2geno_char
CharacterMatrix convert2geno_char(const List xodat, const NumericVector map, const CharacterMatrix founder_geno);
RcppExport SEXP simcross_convert2geno_char(SEXP xodatSEXP, SEXP mapSEXP, SEXP founder_genoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List >::type xodat(xodatSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type map(mapSEXP);
    Rcpp::traits::input_parameter< const CharacterMatrix >::type founder_geno(founder_genoSEXP);
    rcpp_result_gen = Rcpp::wrap(convert2geno_char(xodat, map, founder_geno));
    return rcpp_result_gen;
END_RCPP
}
// convert2geno_char_paste
CharacterMatrix convert2geno_char_paste(const List xodat, const NumericVector map, const CharacterMatrix founder_geno);
RcppExport SEXP simcross_convert2geno_char_paste(SEXP xodatSEXP, SEXP mapSEXP, SEXP founder_genoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List >::type xodat(xodatSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type map(mapSEXP);
    Rcpp::traits::input_parameter< const CharacterMatrix >::type founder_geno(founder_genoSEXP);
    rcpp_result_gen = Rcpp::wrap(convert2geno_char_paste(xodat, map, founder_geno));
    return rcpp_result_gen;
END_RCPP
}
// get_geno
IntegerMatrix get_geno(const List xodat, const double position);
RcppExport SEXP simcross_get_geno(SEXP xodatSEXP, SEXP positionSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List >::type xodat(xodatSEXP);
    Rcpp::traits::input_parameter< const double >::type position(positionSEXP);
    rcpp_result_gen = Rcpp::wrap(get_geno(xodat, position));
    return rcpp_result_gen;
END_RCPP
}
// sim_crossovers
NumericVector sim_crossovers(const double L, const int m, const double p, const bool obligate_chiasma, const double Lstar);
RcppExport SEXP simcross_sim_crossovers(SEXP LSEXP, SEXP mSEXP, SEXP pSEXP, SEXP obligate_chiasmaSEXP, SEXP LstarSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double >::type L(LSEXP);
    Rcpp::traits::input_parameter< const int >::type m(mSEXP);
    Rcpp::traits::input_parameter< const double >::type p(pSEXP);
    Rcpp::traits::input_parameter< const bool >::type obligate_chiasma(obligate_chiasmaSEXP);
    Rcpp::traits::input_parameter< const double >::type Lstar(LstarSEXP);
    rcpp_result_gen = Rcpp::wrap(sim_crossovers(L, m, p, obligate_chiasma, Lstar));
    return rcpp_result_gen;
END_RCPP
}
// sim_meiosis
List sim_meiosis(const List parent, const int m, const double p, const bool obligate_chiasma, const double Lstar);
RcppExport SEXP simcross_sim_meiosis(SEXP parentSEXP, SEXP mSEXP, SEXP pSEXP, SEXP obligate_chiasmaSEXP, SEXP LstarSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List >::type parent(parentSEXP);
    Rcpp::traits::input_parameter< const int >::type m(mSEXP);
    Rcpp::traits::input_parameter< const double >::type p(pSEXP);
    Rcpp::traits::input_parameter< const bool >::type obligate_chiasma(obligate_chiasmaSEXP);
    Rcpp::traits::input_parameter< const double >::type Lstar(LstarSEXP);
    rcpp_result_gen = Rcpp::wrap(sim_meiosis(parent, m, p, obligate_chiasma, Lstar));
    return rcpp_result_gen;
END_RCPP
}
