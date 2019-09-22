To calculate slope of line
#include<stdio.h>
#include<math.h>
int main()
{

float a,b,c,sl;
printf("enter the values of a b c in the equation ax+by+c=0");
scanf("%d%d%d",&a,&b,&c);
sl=-a/b;
printf("\nSlope is %f",sl);
return 0;
}