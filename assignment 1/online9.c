#include<stdio.h>
int main()
{
	int a,n,d ;
	printf("enter a number\n");
	scanf("%d",&a);
	n=a/100 ;
	d=a%10;
	printf("required output is:%d",(n*10+d));
	return 0;
}