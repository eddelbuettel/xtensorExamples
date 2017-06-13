
#include "xtensor-r/rxarray.hpp"

#include <xtensor/xio.hpp>
#include <xtensor/xinfo.hpp>
#include <xtensor/xarray.hpp>

#include <Rcpp.h>

//' First Example for 'xtensor'
//'
//' @title First Example
//' @param verbose A boolean variable indicating whether verbose output is desired.
// [[Rcpp::export]]
xt::rxarray<double> ex1(bool verbose=true) {
    xt::xarray<double> ar({{1,2,3,4}, {2,2,22,2}});
    return ar;
}

//' Second Example for 'xtensor'
//'
//' @title Second Example
//' @param verbose A boolean variable indicating whether verbose output is desired.
// [[Rcpp::export]]
xt::rxarray<double> ex2(bool verbose=true) {
    // one row, two column, three elements
    std::vector<std::size_t> shape = {1, 2, 3};

    xt::rxarray<double> ttt(shape, 0.0);
    ttt(0, 1) = 332211;
    if (verbose) Rcpp::Rcout << ttt << std::endl;

    return ttt;
}

//' Third Example for 'xtensor'
//'
//' @title Third Example
//' @param a An integer array
// [[Rcpp::export]]
xt::rxarray<int> ex3(xt::rxarray<int> a) {
    a(0, 0) = 42;
    return a;
}
