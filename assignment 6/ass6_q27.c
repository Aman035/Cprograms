#include<stdio.h>
int main()
{

	for(int i=7,k=4;i>0;i--,k++)
	{
		for(int j=0;j<1+i;j++)
		{
			printf("%d,",j*k);
		}
		printf("\n");
	}
	return 0;
}