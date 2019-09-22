//To find real roots of an equation
#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d,x,y;
	printf("Enter a b c of the equation ax^2+bx+c\n");
	scanf("%f %f %f",&a,&b,&c);
	d=b*b-4*a*c;
	if(d>0)
	{
			x=(-b+sqrt(d))/(2*a);
			y=(-b-sqrt(d))/(2*a);
			printf(" The roots are %f %f",x,y);
	}
	if(d==0)
	{
		x=(-b+sqrt(d))/(2*a);
		printf("The root is %f",x);
	}
	if(d<0)
		printf("No real root exist");
	return 0;
}
