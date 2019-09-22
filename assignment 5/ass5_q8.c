#include<stdio.h>
int main()
{
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<20;j++)
		{
			if((i+j<6||j>10)&&i<8)
				printf("0");
			else
				printf("*");
		}
		printf("\n");
	}

	return 0;
}