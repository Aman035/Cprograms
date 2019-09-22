#include<stdio.h>
int main()
{
		int j=0,k=1;
	for(int i=0;i<5;i++)
	{
		for(j=0;j<k+i;j++)
		{
			printf("%c",65+j+i);
		}
		printf("\n");
		k=j;
	}
	return 0;
}