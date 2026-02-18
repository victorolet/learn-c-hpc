#include <stdio.h>
#define N 10

int main (void)
{
int i,j,mat_static [N][N];
for(i = 0;i < N;i++)
{
printf("\n");
for(j = 0; j < N ; j++)
{
mat_static[i][j] = 0.0;
printf("%d",mat_static[i][j]);
}
}
printf("\n");
return 0;
}
