/* Fidns the largest and smallest elements in an array */

#include <stdio.h>

#define N 10

void max_min(int a[], int n, int *max, int *min);

int main (void)
{
	int b[N], i , big , small;

	printf("Please enter %d numbers:\n", N);
	for (i=0 ; i<N; i++)
	{
		scanf("%d",&b[i]);
	}
	max_min(b, N, &big, &small);
	printf("The largest value is: %d\n", big );
	printf("The smallest  value is: %d\n", small );

	return 0;
}


void max_min(int a[], int n, int *max, int *min)
{
	int i;
	//Why is below statement incorrect? The pointer has not been assigned//
	//max = &a[0];
	*max = a[0];
	//min = &a[0];
	*min = a[0];

	for(i=1 ; i<n ; i++)
	{
		if(a[i] > *max)
			*max = a[i];
		if(a[i] < *max)
			*min = a[i];
	}
}
