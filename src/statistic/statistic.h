#ifndef _STATISTIC_H
#define _STATISTIC_H


int init_statistic();


double ran1();
/* uniform distribution from 0 to 1 */

double gauss();
/* sigma = 1 mean = 0 gaussian probability */

double gauss_trc();
/* truncated (-1/+1) sigma = 1 mean = 0 gaussian probability */

long poisson(double mu);

double gammaln(double xx);

double better_poisson(double mu);

double fast_poisson(double mu);

long put_poisson_noise(char *ID_in_name, char *ID_out_name);

long put_gauss_noise(char *ID_in_name, char *ID_out_name, double ampl);

#endif
