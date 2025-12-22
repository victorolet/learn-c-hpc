#include <stdio.h>
//Computes the dimensional weight of a box
int main (void)
{

int weight,dconst,length,height,width,volume;

length = 12;
width = 10;
height = 8;
volume =  length * width * height ;
dconst = 166;

weight = (volume + 165) /dconst;

printf("Dimensions(inches): %d, %d, %d\n",length, width, height);
printf("Volume(cubic inches): %d\n",volume);
printf("Dimensional weight(pounds):%d \n",weight);

return 0;

}
