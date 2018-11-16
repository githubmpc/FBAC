// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// getK
int getK(Rcpp::S4 hyperparams);
RcppExport SEXP _CNPBayes_getK(SEXP hyperparamsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::S4 >::type hyperparams(hyperparamsSEXP);
    rcpp_result_gen = Rcpp::wrap(getK(hyperparams));
    return rcpp_result_gen;
END_RCPP
}
// getDf
double getDf(Rcpp::S4 hyperparams);
RcppExport SEXP _CNPBayes_getDf(SEXP hyperparamsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::S4 >::type hyperparams(hyperparamsSEXP);
    rcpp_result_gen = Rcpp::wrap(getDf(hyperparams));
    return rcpp_result_gen;
END_RCPP
}
// unique_batch
Rcpp::IntegerVector unique_batch(Rcpp::IntegerVector x);
RcppExport SEXP _CNPBayes_unique_batch(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(unique_batch(x));
    return rcpp_result_gen;
END_RCPP
}
// tableZ
Rcpp::IntegerVector tableZ(int K, Rcpp::IntegerVector z);
RcppExport SEXP _CNPBayes_tableZ(SEXP KSEXP, SEXP zSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type z(zSEXP);
    rcpp_result_gen = Rcpp::wrap(tableZ(K, z));
    return rcpp_result_gen;
END_RCPP
}
// tableBatchZ
Rcpp::NumericMatrix tableBatchZ(Rcpp::S4 xmod);
RcppExport SEXP _CNPBayes_tableBatchZ(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::S4 >::type xmod(xmodSEXP);
    rcpp_result_gen = Rcpp::wrap(tableBatchZ(xmod));
    return rcpp_result_gen;
END_RCPP
}
// rMultinom
Rcpp::IntegerMatrix rMultinom(Rcpp::NumericMatrix probs, int m);
RcppExport SEXP _CNPBayes_rMultinom(SEXP probsSEXP, SEXP mSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type probs(probsSEXP);
    Rcpp::traits::input_parameter< int >::type m(mSEXP);
    rcpp_result_gen = Rcpp::wrap(rMultinom(probs, m));
    return rcpp_result_gen;
END_RCPP
}
// dlocScale_t
Rcpp::NumericVector dlocScale_t(NumericVector x, double df, double mu, double sigma);
RcppExport SEXP _CNPBayes_dlocScale_t(SEXP xSEXP, SEXP dfSEXP, SEXP muSEXP, SEXP sigmaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type df(dfSEXP);
    Rcpp::traits::input_parameter< double >::type mu(muSEXP);
    Rcpp::traits::input_parameter< double >::type sigma(sigmaSEXP);
    rcpp_result_gen = Rcpp::wrap(dlocScale_t(x, df, mu, sigma));
    return rcpp_result_gen;
END_RCPP
}
// rlocScale_t
Rcpp::NumericVector rlocScale_t(int n, double mu, double sigma, double df, double u);
RcppExport SEXP _CNPBayes_rlocScale_t(SEXP nSEXP, SEXP muSEXP, SEXP sigmaSEXP, SEXP dfSEXP, SEXP uSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< double >::type mu(muSEXP);
    Rcpp::traits::input_parameter< double >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< double >::type df(dfSEXP);
    Rcpp::traits::input_parameter< double >::type u(uSEXP);
    rcpp_result_gen = Rcpp::wrap(rlocScale_t(n, mu, sigma, df, u));
    return rcpp_result_gen;
END_RCPP
}
// compute_u_sums
Rcpp::NumericVector compute_u_sums(Rcpp::S4 xmod);
RcppExport SEXP _CNPBayes_compute_u_sums(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::S4 >::type xmod(xmodSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_u_sums(xmod));
    return rcpp_result_gen;
END_RCPP
}
// compute_heavy_sums
Rcpp::NumericVector compute_heavy_sums(Rcpp::S4 object);
RcppExport SEXP _CNPBayes_compute_heavy_sums(SEXP objectSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::S4 >::type object(objectSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_heavy_sums(object));
    return rcpp_result_gen;
END_RCPP
}
// compute_heavy_means
Rcpp::NumericVector compute_heavy_means(Rcpp::S4 xmod);
RcppExport SEXP _CNPBayes_compute_heavy_means(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::S4 >::type xmod(xmodSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_heavy_means(xmod));
    return rcpp_result_gen;
END_RCPP
}
// compute_u_sums_batch
Rcpp::NumericMatrix compute_u_sums_batch(Rcpp::S4 xmod);
RcppExport SEXP _CNPBayes_compute_u_sums_batch(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::S4 >::type xmod(xmodSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_u_sums_batch(xmod));
    return rcpp_result_gen;
END_RCPP
}
// compute_heavy_sums_batch
Rcpp::NumericMatrix compute_heavy_sums_batch(Rcpp::S4 object);
RcppExport SEXP _CNPBayes_compute_heavy_sums_batch(SEXP objectSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::S4 >::type object(objectSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_heavy_sums_batch(object));
    return rcpp_result_gen;
END_RCPP
}
// compute_heavy_means_batch
Rcpp::NumericMatrix compute_heavy_means_batch(Rcpp::S4 xmod);
RcppExport SEXP _CNPBayes_compute_heavy_means_batch(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::S4 >::type xmod(xmodSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_heavy_means_batch(xmod));
    return rcpp_result_gen;
END_RCPP
}
// log_ddirichlet_
Rcpp::NumericVector log_ddirichlet_(Rcpp::NumericVector x_, Rcpp::NumericVector alpha_);
RcppExport SEXP _CNPBayes_log_ddirichlet_(SEXP x_SEXP, SEXP alpha_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type x_(x_SEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type alpha_(alpha_SEXP);
    rcpp_result_gen = Rcpp::wrap(log_ddirichlet_(x_, alpha_));
    return rcpp_result_gen;
END_RCPP
}
// sample_componentsP
Rcpp::IntegerVector sample_componentsP(Rcpp::IntegerVector x, int size, Rcpp::NumericVector prob);
RcppExport SEXP _CNPBayes_sample_componentsP(SEXP xSEXP, SEXP sizeSEXP, SEXP probSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type size(sizeSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type prob(probSEXP);
    rcpp_result_gen = Rcpp::wrap(sample_componentsP(x, size, prob));
    return rcpp_result_gen;
END_RCPP
}
// update_predictiveP
Rcpp::S4 update_predictiveP(Rcpp::S4 xmod);
RcppExport SEXP _CNPBayes_update_predictiveP(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::S4 >::type xmod(xmodSEXP);
    rcpp_result_gen = Rcpp::wrap(update_predictiveP(xmod));
    return rcpp_result_gen;
END_RCPP
}
// loglik_multibatch_pvar
Rcpp::NumericVector loglik_multibatch_pvar(Rcpp::S4 xmod);
RcppExport SEXP _CNPBayes_loglik_multibatch_pvar(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::S4 >::type xmod(xmodSEXP);
    rcpp_result_gen = Rcpp::wrap(loglik_multibatch_pvar(xmod));
    return rcpp_result_gen;
END_RCPP
}
// sigma20_multibatch_pvar
Rcpp::NumericVector sigma20_multibatch_pvar(Rcpp::S4 xmod);
RcppExport SEXP _CNPBayes_sigma20_multibatch_pvar(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::S4 >::type xmod(xmodSEXP);
    rcpp_result_gen = Rcpp::wrap(sigma20_multibatch_pvar(xmod));
    return rcpp_result_gen;
END_RCPP
}
// nu0_multibatch_pvar
Rcpp::NumericVector nu0_multibatch_pvar(Rcpp::S4 xmod);
RcppExport SEXP _CNPBayes_nu0_multibatch_pvar(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::S4 >::type xmod(xmodSEXP);
    rcpp_result_gen = Rcpp::wrap(nu0_multibatch_pvar(xmod));
    return rcpp_result_gen;
END_RCPP
}
// multinomialPr_multibatch_pvar
Rcpp::NumericMatrix multinomialPr_multibatch_pvar(Rcpp::S4 xmod);
RcppExport SEXP _CNPBayes_multinomialPr_multibatch_pvar(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::S4 >::type xmod(xmodSEXP);
    rcpp_result_gen = Rcpp::wrap(multinomialPr_multibatch_pvar(xmod));
    return rcpp_result_gen;
END_RCPP
}
// z_multibatch_pvar
Rcpp::IntegerVector z_multibatch_pvar(Rcpp::S4 xmod);
RcppExport SEXP _CNPBayes_z_multibatch_pvar(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::S4 >::type xmod(xmodSEXP);
    rcpp_result_gen = Rcpp::wrap(z_multibatch_pvar(xmod));
    return rcpp_result_gen;
END_RCPP
}
// stagetwo_multibatch_pvar
Rcpp::NumericVector stagetwo_multibatch_pvar(Rcpp::S4 xmod);
RcppExport SEXP _CNPBayes_stagetwo_multibatch_pvar(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::S4 >::type xmod(xmodSEXP);
    rcpp_result_gen = Rcpp::wrap(stagetwo_multibatch_pvar(xmod));
    return rcpp_result_gen;
END_RCPP
}
// theta_multibatch_pvar
Rcpp::NumericMatrix theta_multibatch_pvar(Rcpp::S4 xmod);
RcppExport SEXP _CNPBayes_theta_multibatch_pvar(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::S4 >::type xmod(xmodSEXP);
    rcpp_result_gen = Rcpp::wrap(theta_multibatch_pvar(xmod));
    return rcpp_result_gen;
END_RCPP
}
// sigma2_multibatch_pvar
Rcpp::NumericVector sigma2_multibatch_pvar(Rcpp::S4 xmod);
RcppExport SEXP _CNPBayes_sigma2_multibatch_pvar(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::S4 >::type xmod(xmodSEXP);
    rcpp_result_gen = Rcpp::wrap(sigma2_multibatch_pvar(xmod));
    return rcpp_result_gen;
END_RCPP
}
// burnin_multibatch_pvar
Rcpp::S4 burnin_multibatch_pvar(Rcpp::S4 object, Rcpp::S4 mcmcp);
RcppExport SEXP _CNPBayes_burnin_multibatch_pvar(SEXP objectSEXP, SEXP mcmcpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::S4 >::type object(objectSEXP);
    Rcpp::traits::input_parameter< Rcpp::S4 >::type mcmcp(mcmcpSEXP);
    rcpp_result_gen = Rcpp::wrap(burnin_multibatch_pvar(object, mcmcp));
    return rcpp_result_gen;
END_RCPP
}
// mcmc_multibatch_pvar
Rcpp::S4 mcmc_multibatch_pvar(Rcpp::S4 object, Rcpp::S4 mcmcp);
RcppExport SEXP _CNPBayes_mcmc_multibatch_pvar(SEXP objectSEXP, SEXP mcmcpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::S4 >::type object(objectSEXP);
    Rcpp::traits::input_parameter< Rcpp::S4 >::type mcmcp(mcmcpSEXP);
    rcpp_result_gen = Rcpp::wrap(mcmc_multibatch_pvar(object, mcmcp));
    return rcpp_result_gen;
END_RCPP
}
// log_prob_theta
double log_prob_theta(Rcpp::S4 xmod, Rcpp::NumericMatrix thetastar);
RcppExport SEXP _CNPBayes_log_prob_theta(SEXP xmodSEXP, SEXP thetastarSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::S4 >::type xmod(xmodSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type thetastar(thetastarSEXP);
    rcpp_result_gen = Rcpp::wrap(log_prob_theta(xmod, thetastar));
    return rcpp_result_gen;
END_RCPP
}
// marginal_theta_batch
Rcpp::NumericVector marginal_theta_batch(Rcpp::S4 xmod);
RcppExport SEXP _CNPBayes_marginal_theta_batch(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::S4 >::type xmod(xmodSEXP);
    rcpp_result_gen = Rcpp::wrap(marginal_theta_batch(xmod));
    return rcpp_result_gen;
END_RCPP
}
// log_prob_sigma2
double log_prob_sigma2(Rcpp::S4 model, Rcpp::NumericMatrix sigma2star);
RcppExport SEXP _CNPBayes_log_prob_sigma2(SEXP modelSEXP, SEXP sigma2starSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::S4 >::type model(modelSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type sigma2star(sigma2starSEXP);
    rcpp_result_gen = Rcpp::wrap(log_prob_sigma2(model, sigma2star));
    return rcpp_result_gen;
END_RCPP
}
// reduced_sigma_batch
Rcpp::NumericVector reduced_sigma_batch(Rcpp::S4 xmod);
RcppExport SEXP _CNPBayes_reduced_sigma_batch(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::S4 >::type xmod(xmodSEXP);
    rcpp_result_gen = Rcpp::wrap(reduced_sigma_batch(xmod));
    return rcpp_result_gen;
END_RCPP
}
// log_prob_pmix
double log_prob_pmix(Rcpp::S4 xmod, Rcpp::NumericVector pstar);
RcppExport SEXP _CNPBayes_log_prob_pmix(SEXP xmodSEXP, SEXP pstarSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::S4 >::type xmod(xmodSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type pstar(pstarSEXP);
    rcpp_result_gen = Rcpp::wrap(log_prob_pmix(xmod, pstar));
    return rcpp_result_gen;
END_RCPP
}
// reduced_pi_batch
Rcpp::NumericVector reduced_pi_batch(Rcpp::S4 xmod);
RcppExport SEXP _CNPBayes_reduced_pi_batch(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::S4 >::type xmod(xmodSEXP);
    rcpp_result_gen = Rcpp::wrap(reduced_pi_batch(xmod));
    return rcpp_result_gen;
END_RCPP
}
// log_prob_mu
double log_prob_mu(Rcpp::S4 xmod, Rcpp::NumericVector mustar);
RcppExport SEXP _CNPBayes_log_prob_mu(SEXP xmodSEXP, SEXP mustarSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::S4 >::type xmod(xmodSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type mustar(mustarSEXP);
    rcpp_result_gen = Rcpp::wrap(log_prob_mu(xmod, mustar));
    return rcpp_result_gen;
END_RCPP
}
// reduced_mu_batch
Rcpp::NumericVector reduced_mu_batch(Rcpp::S4 xmod);
RcppExport SEXP _CNPBayes_reduced_mu_batch(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::S4 >::type xmod(xmodSEXP);
    rcpp_result_gen = Rcpp::wrap(reduced_mu_batch(xmod));
    return rcpp_result_gen;
END_RCPP
}
// log_prob_tau2
double log_prob_tau2(Rcpp::S4 xmod);
RcppExport SEXP _CNPBayes_log_prob_tau2(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::S4 >::type xmod(xmodSEXP);
    rcpp_result_gen = Rcpp::wrap(log_prob_tau2(xmod));
    return rcpp_result_gen;
END_RCPP
}
// reduced_tau_batch
Rcpp::NumericVector reduced_tau_batch(Rcpp::S4 xmod);
RcppExport SEXP _CNPBayes_reduced_tau_batch(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::S4 >::type xmod(xmodSEXP);
    rcpp_result_gen = Rcpp::wrap(reduced_tau_batch(xmod));
    return rcpp_result_gen;
END_RCPP
}
// log_prob_nu0
double log_prob_nu0(Rcpp::S4 xmod, int nu0star);
RcppExport SEXP _CNPBayes_log_prob_nu0(SEXP xmodSEXP, SEXP nu0starSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::S4 >::type xmod(xmodSEXP);
    Rcpp::traits::input_parameter< int >::type nu0star(nu0starSEXP);
    rcpp_result_gen = Rcpp::wrap(log_prob_nu0(xmod, nu0star));
    return rcpp_result_gen;
END_RCPP
}
// reduced_nu0_batch
Rcpp::NumericVector reduced_nu0_batch(Rcpp::S4 xmod);
RcppExport SEXP _CNPBayes_reduced_nu0_batch(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::S4 >::type xmod(xmodSEXP);
    rcpp_result_gen = Rcpp::wrap(reduced_nu0_batch(xmod));
    return rcpp_result_gen;
END_RCPP
}
// log_prob_s20
double log_prob_s20(Rcpp::S4 xmod);
RcppExport SEXP _CNPBayes_log_prob_s20(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::S4 >::type xmod(xmodSEXP);
    rcpp_result_gen = Rcpp::wrap(log_prob_s20(xmod));
    return rcpp_result_gen;
END_RCPP
}
// reduced_s20_batch
Rcpp::NumericVector reduced_s20_batch(Rcpp::S4 xmod);
RcppExport SEXP _CNPBayes_reduced_s20_batch(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::S4 >::type xmod(xmodSEXP);
    rcpp_result_gen = Rcpp::wrap(reduced_s20_batch(xmod));
    return rcpp_result_gen;
END_RCPP
}
// sample_components
Rcpp::IntegerVector sample_components(Rcpp::IntegerVector x, int size, Rcpp::NumericVector prob);
RcppExport SEXP _CNPBayes_sample_components(SEXP xSEXP, SEXP sizeSEXP, SEXP probSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type size(sizeSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type prob(probSEXP);
    rcpp_result_gen = Rcpp::wrap(sample_components(x, size, prob));
    return rcpp_result_gen;
END_RCPP
}
// compute_loglik
Rcpp::NumericVector compute_loglik(Rcpp::S4 xmod);
RcppExport SEXP _CNPBayes_compute_loglik(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::S4 >::type xmod(xmodSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_loglik(xmod));
    return rcpp_result_gen;
END_RCPP
}
// update_mu
Rcpp::NumericVector update_mu(Rcpp::S4 xmod);
RcppExport SEXP _CNPBayes_update_mu(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::S4 >::type xmod(xmodSEXP);
    rcpp_result_gen = Rcpp::wrap(update_mu(xmod));
    return rcpp_result_gen;
END_RCPP
}
// update_tau2
Rcpp::NumericVector update_tau2(Rcpp::S4 xmod);
RcppExport SEXP _CNPBayes_update_tau2(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::S4 >::type xmod(xmodSEXP);
    rcpp_result_gen = Rcpp::wrap(update_tau2(xmod));
    return rcpp_result_gen;
END_RCPP
}
// update_sigma20
Rcpp::NumericVector update_sigma20(Rcpp::S4 xmod);
RcppExport SEXP _CNPBayes_update_sigma20(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::S4 >::type xmod(xmodSEXP);
    rcpp_result_gen = Rcpp::wrap(update_sigma20(xmod));
    return rcpp_result_gen;
END_RCPP
}
// update_nu0
Rcpp::NumericVector update_nu0(Rcpp::S4 xmod);
RcppExport SEXP _CNPBayes_update_nu0(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::S4 >::type xmod(xmodSEXP);
    rcpp_result_gen = Rcpp::wrap(update_nu0(xmod));
    return rcpp_result_gen;
END_RCPP
}
// update_multinomialPr
Rcpp::NumericMatrix update_multinomialPr(Rcpp::S4 xmod);
RcppExport SEXP _CNPBayes_update_multinomialPr(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::S4 >::type xmod(xmodSEXP);
    rcpp_result_gen = Rcpp::wrap(update_multinomialPr(xmod));
    return rcpp_result_gen;
END_RCPP
}
// update_p
Rcpp::NumericVector update_p(Rcpp::S4 xmod);
RcppExport SEXP _CNPBayes_update_p(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::S4 >::type xmod(xmodSEXP);
    rcpp_result_gen = Rcpp::wrap(update_p(xmod));
    return rcpp_result_gen;
END_RCPP
}
// update_z
Rcpp::IntegerVector update_z(Rcpp::S4 xmod);
RcppExport SEXP _CNPBayes_update_z(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::S4 >::type xmod(xmodSEXP);
    rcpp_result_gen = Rcpp::wrap(update_z(xmod));
    return rcpp_result_gen;
END_RCPP
}
// compute_means
Rcpp::NumericMatrix compute_means(Rcpp::S4 xmod);
RcppExport SEXP _CNPBayes_compute_means(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::S4 >::type xmod(xmodSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_means(xmod));
    return rcpp_result_gen;
END_RCPP
}
// compute_vars
Rcpp::NumericMatrix compute_vars(Rcpp::S4 xmod);
RcppExport SEXP _CNPBayes_compute_vars(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::S4 >::type xmod(xmodSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_vars(xmod));
    return rcpp_result_gen;
END_RCPP
}
// compute_prec
Rcpp::NumericMatrix compute_prec(Rcpp::S4 xmod);
RcppExport SEXP _CNPBayes_compute_prec(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::S4 >::type xmod(xmodSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_prec(xmod));
    return rcpp_result_gen;
END_RCPP
}
// compute_logprior
Rcpp::NumericVector compute_logprior(Rcpp::S4 xmod);
RcppExport SEXP _CNPBayes_compute_logprior(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::S4 >::type xmod(xmodSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_logprior(xmod));
    return rcpp_result_gen;
END_RCPP
}
// stageTwoLogLikBatch
Rcpp::NumericVector stageTwoLogLikBatch(Rcpp::S4 xmod);
RcppExport SEXP _CNPBayes_stageTwoLogLikBatch(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::S4 >::type xmod(xmodSEXP);
    rcpp_result_gen = Rcpp::wrap(stageTwoLogLikBatch(xmod));
    return rcpp_result_gen;
END_RCPP
}
// update_theta
Rcpp::NumericMatrix update_theta(Rcpp::S4 xmod);
RcppExport SEXP _CNPBayes_update_theta(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::S4 >::type xmod(xmodSEXP);
    rcpp_result_gen = Rcpp::wrap(update_theta(xmod));
    return rcpp_result_gen;
END_RCPP
}
// update_sigma2
Rcpp::NumericMatrix update_sigma2(Rcpp::S4 xmod);
RcppExport SEXP _CNPBayes_update_sigma2(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::S4 >::type xmod(xmodSEXP);
    rcpp_result_gen = Rcpp::wrap(update_sigma2(xmod));
    return rcpp_result_gen;
END_RCPP
}
// update_predictive
Rcpp::S4 update_predictive(Rcpp::S4 xmod);
RcppExport SEXP _CNPBayes_update_predictive(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::S4 >::type xmod(xmodSEXP);
    rcpp_result_gen = Rcpp::wrap(update_predictive(xmod));
    return rcpp_result_gen;
END_RCPP
}
// update_probz
Rcpp::IntegerMatrix update_probz(Rcpp::S4 xmod);
RcppExport SEXP _CNPBayes_update_probz(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::S4 >::type xmod(xmodSEXP);
    rcpp_result_gen = Rcpp::wrap(update_probz(xmod));
    return rcpp_result_gen;
END_RCPP
}
// cpp_burnin
Rcpp::S4 cpp_burnin(Rcpp::S4 object);
RcppExport SEXP _CNPBayes_cpp_burnin(SEXP objectSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::S4 >::type object(objectSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_burnin(object));
    return rcpp_result_gen;
END_RCPP
}
// cpp_mcmc
Rcpp::S4 cpp_mcmc(Rcpp::S4 object);
RcppExport SEXP _CNPBayes_cpp_mcmc(SEXP objectSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::S4 >::type object(objectSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_mcmc(object));
    return rcpp_result_gen;
END_RCPP
}
// log_prob_thetap
double log_prob_thetap(Rcpp::S4 xmod, Rcpp::NumericMatrix thetastar);
RcppExport SEXP _CNPBayes_log_prob_thetap(SEXP xmodSEXP, SEXP thetastarSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::S4 >::type xmod(xmodSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type thetastar(thetastarSEXP);
    rcpp_result_gen = Rcpp::wrap(log_prob_thetap(xmod, thetastar));
    return rcpp_result_gen;
END_RCPP
}
// marginal_theta_pooled
Rcpp::NumericVector marginal_theta_pooled(Rcpp::S4 xmod);
RcppExport SEXP _CNPBayes_marginal_theta_pooled(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::S4 >::type xmod(xmodSEXP);
    rcpp_result_gen = Rcpp::wrap(marginal_theta_pooled(xmod));
    return rcpp_result_gen;
END_RCPP
}
// log_prob_sigmap
double log_prob_sigmap(Rcpp::S4 xmod, Rcpp::NumericVector sigma2star);
RcppExport SEXP _CNPBayes_log_prob_sigmap(SEXP xmodSEXP, SEXP sigma2starSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::S4 >::type xmod(xmodSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type sigma2star(sigma2starSEXP);
    rcpp_result_gen = Rcpp::wrap(log_prob_sigmap(xmod, sigma2star));
    return rcpp_result_gen;
END_RCPP
}
// reduced_sigma_pooled
Rcpp::NumericVector reduced_sigma_pooled(Rcpp::S4 xmod);
RcppExport SEXP _CNPBayes_reduced_sigma_pooled(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::S4 >::type xmod(xmodSEXP);
    rcpp_result_gen = Rcpp::wrap(reduced_sigma_pooled(xmod));
    return rcpp_result_gen;
END_RCPP
}
// reduced_pi_pooled
Rcpp::NumericVector reduced_pi_pooled(Rcpp::S4 xmod);
RcppExport SEXP _CNPBayes_reduced_pi_pooled(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::S4 >::type xmod(xmodSEXP);
    rcpp_result_gen = Rcpp::wrap(reduced_pi_pooled(xmod));
    return rcpp_result_gen;
END_RCPP
}
// reduced_mu_pooled
Rcpp::NumericVector reduced_mu_pooled(Rcpp::S4 xmod);
RcppExport SEXP _CNPBayes_reduced_mu_pooled(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::S4 >::type xmod(xmodSEXP);
    rcpp_result_gen = Rcpp::wrap(reduced_mu_pooled(xmod));
    return rcpp_result_gen;
END_RCPP
}
// reduced_tau2_pooled
Rcpp::NumericVector reduced_tau2_pooled(Rcpp::S4 xmod);
RcppExport SEXP _CNPBayes_reduced_tau2_pooled(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::S4 >::type xmod(xmodSEXP);
    rcpp_result_gen = Rcpp::wrap(reduced_tau2_pooled(xmod));
    return rcpp_result_gen;
END_RCPP
}
// log_prob_nu0p
double log_prob_nu0p(Rcpp::S4 xmod, int nu0star);
RcppExport SEXP _CNPBayes_log_prob_nu0p(SEXP xmodSEXP, SEXP nu0starSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::S4 >::type xmod(xmodSEXP);
    Rcpp::traits::input_parameter< int >::type nu0star(nu0starSEXP);
    rcpp_result_gen = Rcpp::wrap(log_prob_nu0p(xmod, nu0star));
    return rcpp_result_gen;
END_RCPP
}
// reduced_nu0_pooled
Rcpp::NumericVector reduced_nu0_pooled(Rcpp::S4 xmod);
RcppExport SEXP _CNPBayes_reduced_nu0_pooled(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::S4 >::type xmod(xmodSEXP);
    rcpp_result_gen = Rcpp::wrap(reduced_nu0_pooled(xmod));
    return rcpp_result_gen;
END_RCPP
}
// log_prob_s20p
double log_prob_s20p(Rcpp::S4 xmod);
RcppExport SEXP _CNPBayes_log_prob_s20p(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::S4 >::type xmod(xmodSEXP);
    rcpp_result_gen = Rcpp::wrap(log_prob_s20p(xmod));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_CNPBayes_getK", (DL_FUNC) &_CNPBayes_getK, 1},
    {"_CNPBayes_getDf", (DL_FUNC) &_CNPBayes_getDf, 1},
    {"_CNPBayes_unique_batch", (DL_FUNC) &_CNPBayes_unique_batch, 1},
    {"_CNPBayes_tableZ", (DL_FUNC) &_CNPBayes_tableZ, 2},
    {"_CNPBayes_tableBatchZ", (DL_FUNC) &_CNPBayes_tableBatchZ, 1},
    {"_CNPBayes_rMultinom", (DL_FUNC) &_CNPBayes_rMultinom, 2},
    {"_CNPBayes_dlocScale_t", (DL_FUNC) &_CNPBayes_dlocScale_t, 4},
    {"_CNPBayes_rlocScale_t", (DL_FUNC) &_CNPBayes_rlocScale_t, 5},
    {"_CNPBayes_compute_u_sums", (DL_FUNC) &_CNPBayes_compute_u_sums, 1},
    {"_CNPBayes_compute_heavy_sums", (DL_FUNC) &_CNPBayes_compute_heavy_sums, 1},
    {"_CNPBayes_compute_heavy_means", (DL_FUNC) &_CNPBayes_compute_heavy_means, 1},
    {"_CNPBayes_compute_u_sums_batch", (DL_FUNC) &_CNPBayes_compute_u_sums_batch, 1},
    {"_CNPBayes_compute_heavy_sums_batch", (DL_FUNC) &_CNPBayes_compute_heavy_sums_batch, 1},
    {"_CNPBayes_compute_heavy_means_batch", (DL_FUNC) &_CNPBayes_compute_heavy_means_batch, 1},
    {"_CNPBayes_log_ddirichlet_", (DL_FUNC) &_CNPBayes_log_ddirichlet_, 2},
    {"_CNPBayes_sample_componentsP", (DL_FUNC) &_CNPBayes_sample_componentsP, 3},
    {"_CNPBayes_update_predictiveP", (DL_FUNC) &_CNPBayes_update_predictiveP, 1},
    {"_CNPBayes_loglik_multibatch_pvar", (DL_FUNC) &_CNPBayes_loglik_multibatch_pvar, 1},
    {"_CNPBayes_sigma20_multibatch_pvar", (DL_FUNC) &_CNPBayes_sigma20_multibatch_pvar, 1},
    {"_CNPBayes_nu0_multibatch_pvar", (DL_FUNC) &_CNPBayes_nu0_multibatch_pvar, 1},
    {"_CNPBayes_multinomialPr_multibatch_pvar", (DL_FUNC) &_CNPBayes_multinomialPr_multibatch_pvar, 1},
    {"_CNPBayes_z_multibatch_pvar", (DL_FUNC) &_CNPBayes_z_multibatch_pvar, 1},
    {"_CNPBayes_stagetwo_multibatch_pvar", (DL_FUNC) &_CNPBayes_stagetwo_multibatch_pvar, 1},
    {"_CNPBayes_theta_multibatch_pvar", (DL_FUNC) &_CNPBayes_theta_multibatch_pvar, 1},
    {"_CNPBayes_sigma2_multibatch_pvar", (DL_FUNC) &_CNPBayes_sigma2_multibatch_pvar, 1},
    {"_CNPBayes_burnin_multibatch_pvar", (DL_FUNC) &_CNPBayes_burnin_multibatch_pvar, 2},
    {"_CNPBayes_mcmc_multibatch_pvar", (DL_FUNC) &_CNPBayes_mcmc_multibatch_pvar, 2},
    {"_CNPBayes_log_prob_theta", (DL_FUNC) &_CNPBayes_log_prob_theta, 2},
    {"_CNPBayes_marginal_theta_batch", (DL_FUNC) &_CNPBayes_marginal_theta_batch, 1},
    {"_CNPBayes_log_prob_sigma2", (DL_FUNC) &_CNPBayes_log_prob_sigma2, 2},
    {"_CNPBayes_reduced_sigma_batch", (DL_FUNC) &_CNPBayes_reduced_sigma_batch, 1},
    {"_CNPBayes_log_prob_pmix", (DL_FUNC) &_CNPBayes_log_prob_pmix, 2},
    {"_CNPBayes_reduced_pi_batch", (DL_FUNC) &_CNPBayes_reduced_pi_batch, 1},
    {"_CNPBayes_log_prob_mu", (DL_FUNC) &_CNPBayes_log_prob_mu, 2},
    {"_CNPBayes_reduced_mu_batch", (DL_FUNC) &_CNPBayes_reduced_mu_batch, 1},
    {"_CNPBayes_log_prob_tau2", (DL_FUNC) &_CNPBayes_log_prob_tau2, 1},
    {"_CNPBayes_reduced_tau_batch", (DL_FUNC) &_CNPBayes_reduced_tau_batch, 1},
    {"_CNPBayes_log_prob_nu0", (DL_FUNC) &_CNPBayes_log_prob_nu0, 2},
    {"_CNPBayes_reduced_nu0_batch", (DL_FUNC) &_CNPBayes_reduced_nu0_batch, 1},
    {"_CNPBayes_log_prob_s20", (DL_FUNC) &_CNPBayes_log_prob_s20, 1},
    {"_CNPBayes_reduced_s20_batch", (DL_FUNC) &_CNPBayes_reduced_s20_batch, 1},
    {"_CNPBayes_sample_components", (DL_FUNC) &_CNPBayes_sample_components, 3},
    {"_CNPBayes_compute_loglik", (DL_FUNC) &_CNPBayes_compute_loglik, 1},
    {"_CNPBayes_update_mu", (DL_FUNC) &_CNPBayes_update_mu, 1},
    {"_CNPBayes_update_tau2", (DL_FUNC) &_CNPBayes_update_tau2, 1},
    {"_CNPBayes_update_sigma20", (DL_FUNC) &_CNPBayes_update_sigma20, 1},
    {"_CNPBayes_update_nu0", (DL_FUNC) &_CNPBayes_update_nu0, 1},
    {"_CNPBayes_update_multinomialPr", (DL_FUNC) &_CNPBayes_update_multinomialPr, 1},
    {"_CNPBayes_update_p", (DL_FUNC) &_CNPBayes_update_p, 1},
    {"_CNPBayes_update_z", (DL_FUNC) &_CNPBayes_update_z, 1},
    {"_CNPBayes_compute_means", (DL_FUNC) &_CNPBayes_compute_means, 1},
    {"_CNPBayes_compute_vars", (DL_FUNC) &_CNPBayes_compute_vars, 1},
    {"_CNPBayes_compute_prec", (DL_FUNC) &_CNPBayes_compute_prec, 1},
    {"_CNPBayes_compute_logprior", (DL_FUNC) &_CNPBayes_compute_logprior, 1},
    {"_CNPBayes_stageTwoLogLikBatch", (DL_FUNC) &_CNPBayes_stageTwoLogLikBatch, 1},
    {"_CNPBayes_update_theta", (DL_FUNC) &_CNPBayes_update_theta, 1},
    {"_CNPBayes_update_sigma2", (DL_FUNC) &_CNPBayes_update_sigma2, 1},
    {"_CNPBayes_update_predictive", (DL_FUNC) &_CNPBayes_update_predictive, 1},
    {"_CNPBayes_update_probz", (DL_FUNC) &_CNPBayes_update_probz, 1},
    {"_CNPBayes_cpp_burnin", (DL_FUNC) &_CNPBayes_cpp_burnin, 1},
    {"_CNPBayes_cpp_mcmc", (DL_FUNC) &_CNPBayes_cpp_mcmc, 1},
    {"_CNPBayes_log_prob_thetap", (DL_FUNC) &_CNPBayes_log_prob_thetap, 2},
    {"_CNPBayes_marginal_theta_pooled", (DL_FUNC) &_CNPBayes_marginal_theta_pooled, 1},
    {"_CNPBayes_log_prob_sigmap", (DL_FUNC) &_CNPBayes_log_prob_sigmap, 2},
    {"_CNPBayes_reduced_sigma_pooled", (DL_FUNC) &_CNPBayes_reduced_sigma_pooled, 1},
    {"_CNPBayes_reduced_pi_pooled", (DL_FUNC) &_CNPBayes_reduced_pi_pooled, 1},
    {"_CNPBayes_reduced_mu_pooled", (DL_FUNC) &_CNPBayes_reduced_mu_pooled, 1},
    {"_CNPBayes_reduced_tau2_pooled", (DL_FUNC) &_CNPBayes_reduced_tau2_pooled, 1},
    {"_CNPBayes_log_prob_nu0p", (DL_FUNC) &_CNPBayes_log_prob_nu0p, 2},
    {"_CNPBayes_reduced_nu0_pooled", (DL_FUNC) &_CNPBayes_reduced_nu0_pooled, 1},
    {"_CNPBayes_log_prob_s20p", (DL_FUNC) &_CNPBayes_log_prob_s20p, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_CNPBayes(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
