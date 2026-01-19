#include <stdio.h>
#define N 10

int main (void)
{
	int row, col;
	double ident[N][N];

	for (row = 0 ; row < N; row ++)
		for (col = 0; col < N ; col ++)
			if (row == col)
				ident[row][col]= 1.0;
			else
				ident[row][col]= 0.0;
        for (row = 0 ; row < N; row ++)
	{
		printf("\n");
                for (col = 0; col < N ; col ++)
			printf("%f",ident[row][col]);
	}
	printf("\n");
	
	return 0;
}

