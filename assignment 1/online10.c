#include<stdio.h>
int main()
{
	int x,y,z;
	printf("Enter a no.\n");
	scanf("%d",&x);
	y=x%10;
	z=(x/10)%10;
	x=((x/100)*10+y)*10+z;
	printf("The output is : %d",x);

	return 0;
}