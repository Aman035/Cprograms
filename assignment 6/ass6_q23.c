#include<stdio.h>
int main()
{
	for(int i=0,k=85;i<6;i++,k-=(2*i+1))
	{
		for(int j=0;j<1+i;j++,k++)
		{
			printf("%c",k);
		}
		printf("\n");
	}
	return 0;
}