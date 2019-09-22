//To display the biggest no. out of three numbers
#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("Enter three no.\n ");
	scanf("%d %d %d",&a,&b,&c);
	d=(a>b?(a>c?a:c):(b>c?b:c));
	printf("\n The biggest no. is : %d",d);
	return 0;
}
