#include <stdio.h>

void decompose(double x, long *int_part, double *frac_part);


int main (void)
{
	long int_part = 0;
	double frac_part = 0;
	long *i;
	double *d;

	i = &int_part;
	d = &frac_part;


	decompose(3.142857, *i, *d);

	printf("Without function: i=%ld and d=%f \n", *i, *d); 


	return 0;

}


void decompose(double x, long *int_part, double *frac_part)
{
        *int_part = (long) x; //drops the fractional part of x//
        *frac_part = x - *int_part;

        printf("Within function: i=%ld and d=%f \n", *int_part, *frac_part);
}

