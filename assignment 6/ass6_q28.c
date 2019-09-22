#include<stdio.h>
int main()
{
	for(int i=2,k=1;i<8;i++,k=1)
	{
		for (int j=1;j<i;j++,k=k+j)
		{
			printf("%d ",(k));
		}
		printf("\n");
	}
	return 0;
}