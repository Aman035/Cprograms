#include<stdio.h>

int main()
{
	for(int i=7,k=4;i>0;i--,k++)
	{
		for(int j=0;j<=30;j+=k)
			printf("%d,",j);
		printf("\n");
	}
	return 0;
}