
#include <gsl/gsl_sf_bessel.h>
#include<cstdio>
#include<iostream>
int main()
{
std::cout.precision(16);
std::cout.setf(std::ios::scientific);
double x = 5.0;
double expected = -0.17759677131433830434739701;
double y = gsl_sf_bessel_J0 (x);

std::printf(" J0(5.0)=" "25%.16le\n", y);
std::printf("exact ="" 25%.18le\n", expected);
return 0;
}
