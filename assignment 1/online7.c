#include<stdio.h>
int main()
{
	int a,n,d ;
	printf("enter a number\n");
	scanf("%d",&a);
	n=a%10;
	d=(a/10 )%10 ;
	printf("required output is:%d",n+d);
	return 0;
}