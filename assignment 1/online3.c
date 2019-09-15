#include<stdio.h>
int main()
{
		printf("enter a,b,c of the equation ax^2+bx+c\n");
		int a,b,c;
		scanf(" %d %d %d",&a,&b,&c);
		printf("enter the value of x\n");
		float p,fp;
		scanf("%f",&p);
		fp=a*p*p+b*p+c;
		printf("the value of equation is: %.2f",fp);
		return 0;

}