# include <stdio.h>

void decompose(double x, long int_part, double frac_part);


int main (void)
{
	long i = 0;
	double d = 0;


	decompose(3.142857, i, d);

	printf("Without function: i=%ld and d=%f \n", i, d); //This shows that C defaults to passing arguments by value i.e. making a local copy of the variable//


	return 0;

}


void decompose(double x, long int_part, double frac_part)
{
        int_part = (long) x; //drops the fractional part of x//
        frac_part = x - int_part;

        printf("Within function: i=%ld and d=%f \n", int_part, frac_part);
}
