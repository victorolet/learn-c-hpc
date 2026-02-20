#include <stdio.h>

#define N 10

int main (void)
{
	int a[N], *p;

	printf("Please enter %d numbers:", N);
	
	//p=&a[0];
	//The name of the array represents the address of its first element
	
	for(p=a;p<a+N;p++)
	{
		scanf("%d",a+p);
	}
	printf("Numbers to be displayed in reverse \n");
	for(p=a+N-1;p>a-1;p--)
	{
		printf("%d \n",*p);
	}

return 0;

}
