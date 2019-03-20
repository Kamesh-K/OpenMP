#include <iostream>
//#include<fftw3.h>
#include <fstream>
#include <iomanip>
#include <vector>
#include <cstdio>
#include <cstdlib>
#include <math.h>
#include <string>
#include <stdio.h>
#include <stdlib.h> //realloc
#include <complex>
#include <cstring>
#include <sstream>
#include <limits>
#include <omp.h>
#define REAL 0
#define IMAG 1
#define DATATYPE double
#define loo(i,a,b) for(i=a;i<b;i++)
#define index33(x,y,i,j,k) x+3*y+3*3*i+3*3*npts1*j+3*3*npts1*npts2*k
#define index(i,j,k)  i+npts1*j+npts1*npts2*k
#define index7(i,j,k,l,ii,jj,kk) i+3*j+3*3*k+3*3*3*l+3*3*3*3*ii+3*3*3*3*npts1*jj+3*3*3*3*npts1*npts2*kk
#define index6(i,j,k,l,m,n) i+3*j+3*3*k+3*3*NSLIP*l+3*3*NSLIP*npts1*m+3*3*NSLIP*npts1*npts2*n
#define indsch(i,j,k) i+3*j+3*3*k
#define indexsp(i,k) i+3*k
#define indcrss(islip,i,j,k) islip+NSLIP*i+NSLIP*npts1*j+NSLIP*npts1*npts2*k
int main()
{
	double time=omp_get_wtime();
	std::cout<<"TEST"<<'\n';
	int i=0,j;
	#pragma omp parallel for private(i)
	loo(i,0,1000000000);
	#pragma omp parallel for private(i)
	loo(i,0,1000000000);
	#pragma omp parallel for private(i)
	loo(i,0,1000000000);
	std::cout<<"IT's OVER\n";
	double time2=omp_get_wtime()-time;
	std::cout<<"TIME : "<<time2<<'\n';
	return 0;
}