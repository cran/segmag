// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// calc_segmentation_magnitude_impl
void calc_segmentation_magnitude_impl(NumericVector segmentation_magnitude_overall, NumericVector index_keypresses, NumericVector gauss_values, int gauss_n_indexes_per_side, int indexes_gauss_offset);
RcppExport SEXP segmag_calc_segmentation_magnitude_impl(SEXP segmentation_magnitude_overallSEXP, SEXP index_keypressesSEXP, SEXP gauss_valuesSEXP, SEXP gauss_n_indexes_per_sideSEXP, SEXP indexes_gauss_offsetSEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericVector >::type segmentation_magnitude_overall(segmentation_magnitude_overallSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type index_keypresses(index_keypressesSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type gauss_values(gauss_valuesSEXP );
        Rcpp::traits::input_parameter< int >::type gauss_n_indexes_per_side(gauss_n_indexes_per_sideSEXP );
        Rcpp::traits::input_parameter< int >::type indexes_gauss_offset(indexes_gauss_offsetSEXP );
        calc_segmentation_magnitude_impl(segmentation_magnitude_overall, index_keypresses, gauss_values, gauss_n_indexes_per_side, indexes_gauss_offset);
    }
    return R_NilValue;
END_RCPP
}
// flag_maxima_positions_impl
NumericVector flag_maxima_positions_impl(NumericVector values);
RcppExport SEXP segmag_flag_maxima_positions_impl(SEXP valuesSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericVector >::type values(valuesSEXP );
        NumericVector __result = flag_maxima_positions_impl(values);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
