// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// cMakeModel
SEXP cMakeModel(List initValues, List initData, List initPriors);
RcppExport SEXP _icenME_cMakeModel(SEXP initValuesSEXP, SEXP initDataSEXP, SEXP initPriorsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type initValues(initValuesSEXP);
    Rcpp::traits::input_parameter< List >::type initData(initDataSEXP);
    Rcpp::traits::input_parameter< List >::type initPriors(initPriorsSEXP);
    rcpp_result_gen = Rcpp::wrap(cMakeModel(initValues, initData, initPriors));
    return rcpp_result_gen;
END_RCPP
}
// c_get_ab_vals
NumericVector c_get_ab_vals(SEXP model);
RcppExport SEXP _icenME_c_get_ab_vals(SEXP modelSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type model(modelSEXP);
    rcpp_result_gen = Rcpp::wrap(c_get_ab_vals(model));
    return rcpp_result_gen;
END_RCPP
}
// c_get_gmus_vals
NumericVector c_get_gmus_vals(SEXP model, int ind);
RcppExport SEXP _icenME_c_get_gmus_vals(SEXP modelSEXP, SEXP indSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type model(modelSEXP);
    Rcpp::traits::input_parameter< int >::type ind(indSEXP);
    rcpp_result_gen = Rcpp::wrap(c_get_gmus_vals(model, ind));
    return rcpp_result_gen;
END_RCPP
}
// c_get_gamma_vals
NumericVector c_get_gamma_vals(SEXP model, int ind1, int ind2);
RcppExport SEXP _icenME_c_get_gamma_vals(SEXP modelSEXP, SEXP ind1SEXP, SEXP ind2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type model(modelSEXP);
    Rcpp::traits::input_parameter< int >::type ind1(ind1SEXP);
    Rcpp::traits::input_parameter< int >::type ind2(ind2SEXP);
    rcpp_result_gen = Rcpp::wrap(c_get_gamma_vals(model, ind1, ind2));
    return rcpp_result_gen;
END_RCPP
}
// c_set_ab
void c_set_ab(SEXP model, NumericVector new_vals);
RcppExport SEXP _icenME_c_set_ab(SEXP modelSEXP, SEXP new_valsSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type model(modelSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type new_vals(new_valsSEXP);
    c_set_ab(model, new_vals);
    return R_NilValue;
END_RCPP
}
// c_setAndCalc_ab
double c_setAndCalc_ab(SEXP model, NumericVector new_vals);
RcppExport SEXP _icenME_c_setAndCalc_ab(SEXP modelSEXP, SEXP new_valsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type model(modelSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type new_vals(new_valsSEXP);
    rcpp_result_gen = Rcpp::wrap(c_setAndCalc_ab(model, new_vals));
    return rcpp_result_gen;
END_RCPP
}
// c_set_gmus
void c_set_gmus(SEXP model, NumericVector new_vals, int ind);
RcppExport SEXP _icenME_c_set_gmus(SEXP modelSEXP, SEXP new_valsSEXP, SEXP indSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type model(modelSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type new_vals(new_valsSEXP);
    Rcpp::traits::input_parameter< int >::type ind(indSEXP);
    c_set_gmus(model, new_vals, ind);
    return R_NilValue;
END_RCPP
}
// c_setAndCalc_gmus
double c_setAndCalc_gmus(SEXP model, NumericVector new_vals, int ind);
RcppExport SEXP _icenME_c_setAndCalc_gmus(SEXP modelSEXP, SEXP new_valsSEXP, SEXP indSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type model(modelSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type new_vals(new_valsSEXP);
    Rcpp::traits::input_parameter< int >::type ind(indSEXP);
    rcpp_result_gen = Rcpp::wrap(c_setAndCalc_gmus(model, new_vals, ind));
    return rcpp_result_gen;
END_RCPP
}
// c_set_gamma
void c_set_gamma(SEXP model, NumericVector new_vals, int ind1, int ind2);
RcppExport SEXP _icenME_c_set_gamma(SEXP modelSEXP, SEXP new_valsSEXP, SEXP ind1SEXP, SEXP ind2SEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type model(modelSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type new_vals(new_valsSEXP);
    Rcpp::traits::input_parameter< int >::type ind1(ind1SEXP);
    Rcpp::traits::input_parameter< int >::type ind2(ind2SEXP);
    c_set_gamma(model, new_vals, ind1, ind2);
    return R_NilValue;
END_RCPP
}
// c_setAndCalc_gamma
double c_setAndCalc_gamma(SEXP model, NumericVector new_vals, int ind1, int ind2);
RcppExport SEXP _icenME_c_setAndCalc_gamma(SEXP modelSEXP, SEXP new_valsSEXP, SEXP ind1SEXP, SEXP ind2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type model(modelSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type new_vals(new_valsSEXP);
    Rcpp::traits::input_parameter< int >::type ind1(ind1SEXP);
    Rcpp::traits::input_parameter< int >::type ind2(ind2SEXP);
    rcpp_result_gen = Rcpp::wrap(c_setAndCalc_gamma(model, new_vals, ind1, ind2));
    return rcpp_result_gen;
END_RCPP
}
// n_gmus
int n_gmus(SEXP model);
RcppExport SEXP _icenME_n_gmus(SEXP modelSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type model(modelSEXP);
    rcpp_result_gen = Rcpp::wrap(n_gmus(model));
    return rcpp_result_gen;
END_RCPP
}
// n_gamma
int n_gamma(SEXP model, int gamma_l1);
RcppExport SEXP _icenME_n_gamma(SEXP modelSEXP, SEXP gamma_l1SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type model(modelSEXP);
    Rcpp::traits::input_parameter< int >::type gamma_l1(gamma_l1SEXP);
    rcpp_result_gen = Rcpp::wrap(n_gamma(model, gamma_l1));
    return rcpp_result_gen;
END_RCPP
}
// c_full_lp
double c_full_lp(SEXP model);
RcppExport SEXP _icenME_c_full_lp(SEXP modelSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type model(modelSEXP);
    rcpp_result_gen = Rcpp::wrap(c_full_lp(model));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_icenME_cMakeModel", (DL_FUNC) &_icenME_cMakeModel, 3},
    {"_icenME_c_get_ab_vals", (DL_FUNC) &_icenME_c_get_ab_vals, 1},
    {"_icenME_c_get_gmus_vals", (DL_FUNC) &_icenME_c_get_gmus_vals, 2},
    {"_icenME_c_get_gamma_vals", (DL_FUNC) &_icenME_c_get_gamma_vals, 3},
    {"_icenME_c_set_ab", (DL_FUNC) &_icenME_c_set_ab, 2},
    {"_icenME_c_setAndCalc_ab", (DL_FUNC) &_icenME_c_setAndCalc_ab, 2},
    {"_icenME_c_set_gmus", (DL_FUNC) &_icenME_c_set_gmus, 3},
    {"_icenME_c_setAndCalc_gmus", (DL_FUNC) &_icenME_c_setAndCalc_gmus, 3},
    {"_icenME_c_set_gamma", (DL_FUNC) &_icenME_c_set_gamma, 4},
    {"_icenME_c_setAndCalc_gamma", (DL_FUNC) &_icenME_c_setAndCalc_gamma, 4},
    {"_icenME_n_gmus", (DL_FUNC) &_icenME_n_gmus, 1},
    {"_icenME_n_gamma", (DL_FUNC) &_icenME_n_gamma, 2},
    {"_icenME_c_full_lp", (DL_FUNC) &_icenME_c_full_lp, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_icenME(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
