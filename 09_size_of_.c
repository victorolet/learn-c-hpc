#include <stdio.h>

int main (void)
{
int i = 5;
float j = 32.681;
long double k = 15145156.85148864514584715284184715;

printf("size of int i is %lu \n", sizeof(i));
printf("size of float j is %lu \n", sizeof(j));
printf("size of long double k is %lu \n", sizeof(k));


return 0;
}
