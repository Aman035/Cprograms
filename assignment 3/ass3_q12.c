#include<stdio.h>
#include<math.h>
int main()
{
	float p,q,r,a,b,c,d,e,ar;
	printf("Enter the value of p q r a b c as specified in question\n");
	scanf("%f %f %f %f %f %f",&p,&q,&r,&a,&b,&c);
	d=((a*p+b*q+c)/(sqrt(a*a+b*b)));
	if(d>r)
		printf("No intersection");
	else
	{
		e=sqrt((r*r)-(d*d));
		ar=e*d;
		
		printf("\nArea of triangle is : %f",ar);
	}
	return 0;


}