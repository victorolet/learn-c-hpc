#include <stdio.h>
//This program prints out a value and it's eight power in rows up until the value specified//

int main (void)
{

int n,i;

printf("Enter the number of rows you want \n");
scanf("%d", &n);

i = 1;

while(i < n)
{
printf("%d   %d\n",i,i * i * i * i * i * i * i);

i++;

}

// Some questions. How do you measure the time it takes to run a calculation?  What are the limitations of an int data type with above example in mind?//


return 0;
}


