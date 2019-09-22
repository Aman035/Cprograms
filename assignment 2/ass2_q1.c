//To calculate area of a triangle
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float S,ar;
	printf("enter values of sides");
	scanf("%d%d%d",&a,&b,&c);
	S=(a+b+c)/2;
	ar=sqrt(S*(S-a)*(S-b)*(S-c));
	printf("\n%f",ar);
	return 0;
 }
 
    