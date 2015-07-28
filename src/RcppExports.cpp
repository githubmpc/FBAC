// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// tableZ
IntegerVector tableZ(int K, IntegerVector z);
RcppExport SEXP CNPBayes_tableZ(SEXP KSEXP, SEXP zSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type z(zSEXP);
    __result = Rcpp::wrap(tableZ(K, z));
    return __result;
END_RCPP
}
// getK
int getK(Rcpp::S4 hyperparams);
RcppExport SEXP CNPBayes_getK(SEXP hyperparamsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::S4 >::type hyperparams(hyperparamsSEXP);
    __result = Rcpp::wrap(getK(hyperparams));
    return __result;
END_RCPP
}
// uniqueBatch
IntegerVector uniqueBatch(IntegerVector x);
RcppExport SEXP CNPBayes_uniqueBatch(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< IntegerVector >::type x(xSEXP);
    __result = Rcpp::wrap(uniqueBatch(x));
    return __result;
END_RCPP
}
// tableBatchZ
RcppExport SEXP tableBatchZ(SEXP xmod);
RcppExport SEXP CNPBayes_tableBatchZ(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type xmod(xmodSEXP);
    __result = Rcpp::wrap(tableBatchZ(xmod));
    return __result;
END_RCPP
}
// compute_loglik_batch
RcppExport SEXP compute_loglik_batch(SEXP xmod);
RcppExport SEXP CNPBayes_compute_loglik_batch(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type xmod(xmodSEXP);
    __result = Rcpp::wrap(compute_loglik_batch(xmod));
    return __result;
END_RCPP
}
// update_mu_batch
RcppExport SEXP update_mu_batch(SEXP xmod);
RcppExport SEXP CNPBayes_update_mu_batch(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type xmod(xmodSEXP);
    __result = Rcpp::wrap(update_mu_batch(xmod));
    return __result;
END_RCPP
}
// update_tau2_batch
RcppExport SEXP update_tau2_batch(SEXP xmod);
RcppExport SEXP CNPBayes_update_tau2_batch(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type xmod(xmodSEXP);
    __result = Rcpp::wrap(update_tau2_batch(xmod));
    return __result;
END_RCPP
}
// update_sigma20_batch
RcppExport SEXP update_sigma20_batch(SEXP xmod);
RcppExport SEXP CNPBayes_update_sigma20_batch(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type xmod(xmodSEXP);
    __result = Rcpp::wrap(update_sigma20_batch(xmod));
    return __result;
END_RCPP
}
// update_nu0_batch
RcppExport SEXP update_nu0_batch(SEXP xmod);
RcppExport SEXP CNPBayes_update_nu0_batch(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type xmod(xmodSEXP);
    __result = Rcpp::wrap(update_nu0_batch(xmod));
    return __result;
END_RCPP
}
// update_multinomialPr_batch
RcppExport SEXP update_multinomialPr_batch(SEXP xmod);
RcppExport SEXP CNPBayes_update_multinomialPr_batch(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type xmod(xmodSEXP);
    __result = Rcpp::wrap(update_multinomialPr_batch(xmod));
    return __result;
END_RCPP
}
// update_p_batch
RcppExport SEXP update_p_batch(SEXP xmod);
RcppExport SEXP CNPBayes_update_p_batch(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type xmod(xmodSEXP);
    __result = Rcpp::wrap(update_p_batch(xmod));
    return __result;
END_RCPP
}
// update_z_batch
RcppExport SEXP update_z_batch(SEXP xmod);
RcppExport SEXP CNPBayes_update_z_batch(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type xmod(xmodSEXP);
    __result = Rcpp::wrap(update_z_batch(xmod));
    return __result;
END_RCPP
}
// compute_means_batch
RcppExport SEXP compute_means_batch(SEXP xmod);
RcppExport SEXP CNPBayes_compute_means_batch(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type xmod(xmodSEXP);
    __result = Rcpp::wrap(compute_means_batch(xmod));
    return __result;
END_RCPP
}
// compute_vars_batch
RcppExport SEXP compute_vars_batch(SEXP xmod);
RcppExport SEXP CNPBayes_compute_vars_batch(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type xmod(xmodSEXP);
    __result = Rcpp::wrap(compute_vars_batch(xmod));
    return __result;
END_RCPP
}
// compute_prec_batch
RcppExport SEXP compute_prec_batch(SEXP xmod);
RcppExport SEXP CNPBayes_compute_prec_batch(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type xmod(xmodSEXP);
    __result = Rcpp::wrap(compute_prec_batch(xmod));
    return __result;
END_RCPP
}
// compute_logprior_batch
RcppExport SEXP compute_logprior_batch(SEXP xmod);
RcppExport SEXP CNPBayes_compute_logprior_batch(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type xmod(xmodSEXP);
    __result = Rcpp::wrap(compute_logprior_batch(xmod));
    return __result;
END_RCPP
}
// stageTwoLogLikBatch
RcppExport SEXP stageTwoLogLikBatch(SEXP xmod);
RcppExport SEXP CNPBayes_stageTwoLogLikBatch(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type xmod(xmodSEXP);
    __result = Rcpp::wrap(stageTwoLogLikBatch(xmod));
    return __result;
END_RCPP
}
// update_theta_batch
RcppExport SEXP update_theta_batch(SEXP xmod);
RcppExport SEXP CNPBayes_update_theta_batch(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type xmod(xmodSEXP);
    __result = Rcpp::wrap(update_theta_batch(xmod));
    return __result;
END_RCPP
}
// update_sigma2_batch
RcppExport SEXP update_sigma2_batch(SEXP xmod);
RcppExport SEXP CNPBayes_update_sigma2_batch(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type xmod(xmodSEXP);
    __result = Rcpp::wrap(update_sigma2_batch(xmod));
    return __result;
END_RCPP
}
// order_
IntegerVector order_(NumericVector x);
RcppExport SEXP CNPBayes_order_(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    __result = Rcpp::wrap(order_(x));
    return __result;
END_RCPP
}
// update_probz_batch
RcppExport SEXP update_probz_batch(SEXP xmod);
RcppExport SEXP CNPBayes_update_probz_batch(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type xmod(xmodSEXP);
    __result = Rcpp::wrap(update_probz_batch(xmod));
    return __result;
END_RCPP
}
// mcmc_batch_burnin
RcppExport SEXP mcmc_batch_burnin(SEXP xmod, SEXP mcmcp);
RcppExport SEXP CNPBayes_mcmc_batch_burnin(SEXP xmodSEXP, SEXP mcmcpSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type xmod(xmodSEXP);
    Rcpp::traits::input_parameter< SEXP >::type mcmcp(mcmcpSEXP);
    __result = Rcpp::wrap(mcmc_batch_burnin(xmod, mcmcp));
    return __result;
END_RCPP
}
// mcmc_batch
RcppExport SEXP mcmc_batch(SEXP object, SEXP mcmcp);
RcppExport SEXP CNPBayes_mcmc_batch(SEXP objectSEXP, SEXP mcmcpSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type object(objectSEXP);
    Rcpp::traits::input_parameter< SEXP >::type mcmcp(mcmcpSEXP);
    __result = Rcpp::wrap(mcmc_batch(object, mcmcp));
    return __result;
END_RCPP
}
// p_theta_batch
RcppExport SEXP p_theta_batch(SEXP xmod);
RcppExport SEXP CNPBayes_p_theta_batch(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type xmod(xmodSEXP);
    __result = Rcpp::wrap(p_theta_batch(xmod));
    return __result;
END_RCPP
}
// p_theta_zfixed_batch
RcppExport SEXP p_theta_zfixed_batch(SEXP xmod);
RcppExport SEXP CNPBayes_p_theta_zfixed_batch(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type xmod(xmodSEXP);
    __result = Rcpp::wrap(p_theta_zfixed_batch(xmod));
    return __result;
END_RCPP
}
// simulate_z_reduced1_batch
RcppExport SEXP simulate_z_reduced1_batch(SEXP object);
RcppExport SEXP CNPBayes_simulate_z_reduced1_batch(SEXP objectSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type object(objectSEXP);
    __result = Rcpp::wrap(simulate_z_reduced1_batch(object));
    return __result;
END_RCPP
}
// reduced_z_theta_fixed
RcppExport SEXP reduced_z_theta_fixed(SEXP object);
RcppExport SEXP CNPBayes_reduced_z_theta_fixed(SEXP objectSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type object(objectSEXP);
    __result = Rcpp::wrap(reduced_z_theta_fixed(object));
    return __result;
END_RCPP
}
// simulate_z_reduced2_batch
RcppExport SEXP simulate_z_reduced2_batch(SEXP object);
RcppExport SEXP CNPBayes_simulate_z_reduced2_batch(SEXP objectSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type object(objectSEXP);
    __result = Rcpp::wrap(simulate_z_reduced2_batch(object));
    return __result;
END_RCPP
}
// p_sigma2_batch
RcppExport SEXP p_sigma2_batch(SEXP xmod);
RcppExport SEXP CNPBayes_p_sigma2_batch(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type xmod(xmodSEXP);
    __result = Rcpp::wrap(p_sigma2_batch(xmod));
    return __result;
END_RCPP
}
// loglik
RcppExport SEXP loglik(SEXP xmod);
RcppExport SEXP CNPBayes_loglik(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type xmod(xmodSEXP);
    __result = Rcpp::wrap(loglik(xmod));
    return __result;
END_RCPP
}
// log_ddirichlet_
NumericVector log_ddirichlet_(NumericVector x_, NumericVector alpha_);
RcppExport SEXP CNPBayes_log_ddirichlet_(SEXP x_SEXP, SEXP alpha_SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type x_(x_SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type alpha_(alpha_SEXP);
    __result = Rcpp::wrap(log_ddirichlet_(x_, alpha_));
    return __result;
END_RCPP
}
// stageTwoLogLik
RcppExport SEXP stageTwoLogLik(SEXP xmod);
RcppExport SEXP CNPBayes_stageTwoLogLik(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type xmod(xmodSEXP);
    __result = Rcpp::wrap(stageTwoLogLik(xmod));
    return __result;
END_RCPP
}
// update_mu
RcppExport SEXP update_mu(SEXP xmod);
RcppExport SEXP CNPBayes_update_mu(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type xmod(xmodSEXP);
    __result = Rcpp::wrap(update_mu(xmod));
    return __result;
END_RCPP
}
// update_tau2
RcppExport SEXP update_tau2(SEXP xmod);
RcppExport SEXP CNPBayes_update_tau2(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type xmod(xmodSEXP);
    __result = Rcpp::wrap(update_tau2(xmod));
    return __result;
END_RCPP
}
// update_sigma2_0
RcppExport SEXP update_sigma2_0(SEXP xmod);
RcppExport SEXP CNPBayes_update_sigma2_0(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type xmod(xmodSEXP);
    __result = Rcpp::wrap(update_sigma2_0(xmod));
    return __result;
END_RCPP
}
// update_nu0
RcppExport SEXP update_nu0(SEXP xmod);
RcppExport SEXP CNPBayes_update_nu0(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type xmod(xmodSEXP);
    __result = Rcpp::wrap(update_nu0(xmod));
    return __result;
END_RCPP
}
// update_p
RcppExport SEXP update_p(SEXP xmod);
RcppExport SEXP CNPBayes_update_p(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type xmod(xmodSEXP);
    __result = Rcpp::wrap(update_p(xmod));
    return __result;
END_RCPP
}
// update_multinomialPr
RcppExport SEXP update_multinomialPr(SEXP xmod);
RcppExport SEXP CNPBayes_update_multinomialPr(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type xmod(xmodSEXP);
    __result = Rcpp::wrap(update_multinomialPr(xmod));
    return __result;
END_RCPP
}
// update_z
RcppExport SEXP update_z(SEXP xmod);
RcppExport SEXP CNPBayes_update_z(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type xmod(xmodSEXP);
    __result = Rcpp::wrap(update_z(xmod));
    return __result;
END_RCPP
}
// compute_means
RcppExport SEXP compute_means(SEXP xmod);
RcppExport SEXP CNPBayes_compute_means(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type xmod(xmodSEXP);
    __result = Rcpp::wrap(compute_means(xmod));
    return __result;
END_RCPP
}
// compute_vars
RcppExport SEXP compute_vars(SEXP xmod);
RcppExport SEXP CNPBayes_compute_vars(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type xmod(xmodSEXP);
    __result = Rcpp::wrap(compute_vars(xmod));
    return __result;
END_RCPP
}
// compute_prec
RcppExport SEXP compute_prec(SEXP xmod);
RcppExport SEXP CNPBayes_compute_prec(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type xmod(xmodSEXP);
    __result = Rcpp::wrap(compute_prec(xmod));
    return __result;
END_RCPP
}
// compute_logprior
RcppExport SEXP compute_logprior(SEXP xmod);
RcppExport SEXP CNPBayes_compute_logprior(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type xmod(xmodSEXP);
    __result = Rcpp::wrap(compute_logprior(xmod));
    return __result;
END_RCPP
}
// update_sigma2
RcppExport SEXP update_sigma2(SEXP xmod);
RcppExport SEXP CNPBayes_update_sigma2(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type xmod(xmodSEXP);
    __result = Rcpp::wrap(update_sigma2(xmod));
    return __result;
END_RCPP
}
// ordertheta_
IntegerVector ordertheta_(NumericVector x);
RcppExport SEXP CNPBayes_ordertheta_(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    __result = Rcpp::wrap(ordertheta_(x));
    return __result;
END_RCPP
}
// compute_probz
RcppExport SEXP compute_probz(SEXP xmod);
RcppExport SEXP CNPBayes_compute_probz(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type xmod(xmodSEXP);
    __result = Rcpp::wrap(compute_probz(xmod));
    return __result;
END_RCPP
}
// mcmc_marginal_burnin
RcppExport SEXP mcmc_marginal_burnin(SEXP xmod, SEXP mcmcp);
RcppExport SEXP CNPBayes_mcmc_marginal_burnin(SEXP xmodSEXP, SEXP mcmcpSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type xmod(xmodSEXP);
    Rcpp::traits::input_parameter< SEXP >::type mcmcp(mcmcpSEXP);
    __result = Rcpp::wrap(mcmc_marginal_burnin(xmod, mcmcp));
    return __result;
END_RCPP
}
// mcmc_marginal
RcppExport SEXP mcmc_marginal(SEXP object, SEXP mcmcp);
RcppExport SEXP CNPBayes_mcmc_marginal(SEXP objectSEXP, SEXP mcmcpSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type object(objectSEXP);
    Rcpp::traits::input_parameter< SEXP >::type mcmcp(mcmcpSEXP);
    __result = Rcpp::wrap(mcmc_marginal(object, mcmcp));
    return __result;
END_RCPP
}
// marginal_theta
RcppExport SEXP marginal_theta(SEXP xmod);
RcppExport SEXP CNPBayes_marginal_theta(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type xmod(xmodSEXP);
    __result = Rcpp::wrap(marginal_theta(xmod));
    return __result;
END_RCPP
}
// p_theta_zpermuted
RcppExport SEXP p_theta_zpermuted(SEXP xmod);
RcppExport SEXP CNPBayes_p_theta_zpermuted(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type xmod(xmodSEXP);
    __result = Rcpp::wrap(p_theta_zpermuted(xmod));
    return __result;
END_RCPP
}
// simulate_z_reduced1
RcppExport SEXP simulate_z_reduced1(SEXP object);
RcppExport SEXP CNPBayes_simulate_z_reduced1(SEXP objectSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type object(objectSEXP);
    __result = Rcpp::wrap(simulate_z_reduced1(object));
    return __result;
END_RCPP
}
// simulate_z_reduced2
RcppExport SEXP simulate_z_reduced2(SEXP object);
RcppExport SEXP CNPBayes_simulate_z_reduced2(SEXP objectSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type object(objectSEXP);
    __result = Rcpp::wrap(simulate_z_reduced2(object));
    return __result;
END_RCPP
}
// permutedz_reduced1
RcppExport SEXP permutedz_reduced1(SEXP xmod);
RcppExport SEXP CNPBayes_permutedz_reduced1(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type xmod(xmodSEXP);
    __result = Rcpp::wrap(permutedz_reduced1(xmod));
    return __result;
END_RCPP
}
// permutedz_reduced2
RcppExport SEXP permutedz_reduced2(SEXP xmod);
RcppExport SEXP CNPBayes_permutedz_reduced2(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type xmod(xmodSEXP);
    __result = Rcpp::wrap(permutedz_reduced2(xmod));
    return __result;
END_RCPP
}
// p_pmix_reduced
RcppExport SEXP p_pmix_reduced(SEXP xmod);
RcppExport SEXP CNPBayes_p_pmix_reduced(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type xmod(xmodSEXP);
    __result = Rcpp::wrap(p_pmix_reduced(xmod));
    return __result;
END_RCPP
}
// reduced_sigma
RcppExport SEXP reduced_sigma(SEXP xmod);
RcppExport SEXP CNPBayes_reduced_sigma(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type xmod(xmodSEXP);
    __result = Rcpp::wrap(reduced_sigma(xmod));
    return __result;
END_RCPP
}
// p_sigma_reduced
RcppExport SEXP p_sigma_reduced(SEXP xmod);
RcppExport SEXP CNPBayes_p_sigma_reduced(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type xmod(xmodSEXP);
    __result = Rcpp::wrap(p_sigma_reduced(xmod));
    return __result;
END_RCPP
}
// reduced_pi
RcppExport SEXP reduced_pi(SEXP xmod);
RcppExport SEXP CNPBayes_reduced_pi(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type xmod(xmodSEXP);
    __result = Rcpp::wrap(reduced_pi(xmod));
    return __result;
END_RCPP
}
// reduced_mu
RcppExport SEXP reduced_mu(SEXP xmod);
RcppExport SEXP CNPBayes_reduced_mu(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type xmod(xmodSEXP);
    __result = Rcpp::wrap(reduced_mu(xmod));
    return __result;
END_RCPP
}
// p_mu_reduced
RcppExport SEXP p_mu_reduced(SEXP xmod);
RcppExport SEXP CNPBayes_p_mu_reduced(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type xmod(xmodSEXP);
    __result = Rcpp::wrap(p_mu_reduced(xmod));
    return __result;
END_RCPP
}
// reduced_tau
RcppExport SEXP reduced_tau(SEXP xmod);
RcppExport SEXP CNPBayes_reduced_tau(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type xmod(xmodSEXP);
    __result = Rcpp::wrap(reduced_tau(xmod));
    return __result;
END_RCPP
}
// p_tau_reduced
RcppExport SEXP p_tau_reduced(SEXP xmod);
RcppExport SEXP CNPBayes_p_tau_reduced(SEXP xmodSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type xmod(xmodSEXP);
    __result = Rcpp::wrap(p_tau_reduced(xmod));
    return __result;
END_RCPP
}
