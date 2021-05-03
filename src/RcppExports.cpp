// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// iNMF_BCD
List iNMF_BCD(List count_list, NumericVector Label, int K_l, int K, double lda1, double lda2, double eps, int thre_niter, double thre_delta, int seed, bool loop);
RcppExport SEXP _scINSIGHT_iNMF_BCD(SEXP count_listSEXP, SEXP LabelSEXP, SEXP K_lSEXP, SEXP KSEXP, SEXP lda1SEXP, SEXP lda2SEXP, SEXP epsSEXP, SEXP thre_niterSEXP, SEXP thre_deltaSEXP, SEXP seedSEXP, SEXP loopSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type count_list(count_listSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Label(LabelSEXP);
    Rcpp::traits::input_parameter< int >::type K_l(K_lSEXP);
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< double >::type lda1(lda1SEXP);
    Rcpp::traits::input_parameter< double >::type lda2(lda2SEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    Rcpp::traits::input_parameter< int >::type thre_niter(thre_niterSEXP);
    Rcpp::traits::input_parameter< double >::type thre_delta(thre_deltaSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< bool >::type loop(loopSEXP);
    rcpp_result_gen = Rcpp::wrap(iNMF_BCD(count_list, Label, K_l, K, lda1, lda2, eps, thre_niter, thre_delta, seed, loop));
    return rcpp_result_gen;
END_RCPP
}
// iNMF_BCD_Decrease
List iNMF_BCD_Decrease(List count_list, NumericVector Label, int K_l, IntegerVector K, double lda1, double lda2, double eps, int thre_niter, double thre_delta, int seed, bool loop);
RcppExport SEXP _scINSIGHT_iNMF_BCD_Decrease(SEXP count_listSEXP, SEXP LabelSEXP, SEXP K_lSEXP, SEXP KSEXP, SEXP lda1SEXP, SEXP lda2SEXP, SEXP epsSEXP, SEXP thre_niterSEXP, SEXP thre_deltaSEXP, SEXP seedSEXP, SEXP loopSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type count_list(count_listSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Label(LabelSEXP);
    Rcpp::traits::input_parameter< int >::type K_l(K_lSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type K(KSEXP);
    Rcpp::traits::input_parameter< double >::type lda1(lda1SEXP);
    Rcpp::traits::input_parameter< double >::type lda2(lda2SEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    Rcpp::traits::input_parameter< int >::type thre_niter(thre_niterSEXP);
    Rcpp::traits::input_parameter< double >::type thre_delta(thre_deltaSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< bool >::type loop(loopSEXP);
    rcpp_result_gen = Rcpp::wrap(iNMF_BCD_Decrease(count_list, Label, K_l, K, lda1, lda2, eps, thre_niter, thre_delta, seed, loop));
    return rcpp_result_gen;
END_RCPP
}
// iNMF_BCD_Increase
List iNMF_BCD_Increase(List count_list, NumericVector Label, int K_l, IntegerVector K, double lda1, double lda2, double eps, int thre_niter, double thre_delta, int seed, bool loop);
RcppExport SEXP _scINSIGHT_iNMF_BCD_Increase(SEXP count_listSEXP, SEXP LabelSEXP, SEXP K_lSEXP, SEXP KSEXP, SEXP lda1SEXP, SEXP lda2SEXP, SEXP epsSEXP, SEXP thre_niterSEXP, SEXP thre_deltaSEXP, SEXP seedSEXP, SEXP loopSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type count_list(count_listSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Label(LabelSEXP);
    Rcpp::traits::input_parameter< int >::type K_l(K_lSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type K(KSEXP);
    Rcpp::traits::input_parameter< double >::type lda1(lda1SEXP);
    Rcpp::traits::input_parameter< double >::type lda2(lda2SEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    Rcpp::traits::input_parameter< int >::type thre_niter(thre_niterSEXP);
    Rcpp::traits::input_parameter< double >::type thre_delta(thre_deltaSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< bool >::type loop(loopSEXP);
    rcpp_result_gen = Rcpp::wrap(iNMF_BCD_Increase(count_list, Label, K_l, K, lda1, lda2, eps, thre_niter, thre_delta, seed, loop));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_scINSIGHT_iNMF_BCD", (DL_FUNC) &_scINSIGHT_iNMF_BCD, 11},
    {"_scINSIGHT_iNMF_BCD_Decrease", (DL_FUNC) &_scINSIGHT_iNMF_BCD_Decrease, 11},
    {"_scINSIGHT_iNMF_BCD_Increase", (DL_FUNC) &_scINSIGHT_iNMF_BCD_Increase, 11},
    {NULL, NULL, 0}
};

RcppExport void R_init_scINSIGHT(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
