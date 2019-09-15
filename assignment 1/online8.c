#include<stdio.h>
int main()
{
	int a,n ;
	printf("enter a number\n");
	scanf("%d",&a);
	n=a%10 ;
	printf("required output is:%d",a+n);
	return 0;
}