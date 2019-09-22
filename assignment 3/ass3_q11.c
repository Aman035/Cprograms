#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
	printf("Enter three no.\n");
	scanf("%d %d %d",&a,&b,&c);
	d=(a>b?(a>c?a:c):(b>c?b:c));
	e=(a<b?(a<c?a:c):(b<c?b:c));
	f=a+b+c-d-e;

	printf("\nOutput : %d",f);
	return 0;
}