#include<stdio.h>
int main()
{
		int k=0;
	for(int i=0;i<=5;i++,k=0)
	{
		for(int j=0;j<=5-i;j++)
		{
			printf("%c",(65+k));
			k+=i+1;
		}
		printf("\n");
	}
	return 0;
}