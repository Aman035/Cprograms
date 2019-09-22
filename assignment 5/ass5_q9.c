#include<stdio.h>
int main()
{
	for(int i=0;i<9;i++)
	{
		for(int j=0;j<20;j++)
		{
			if((i+j<=7||j-i>=4)&&i>2)
				printf("*");
			else 
			{
				if(i<3)
				printf("*");
			else 
				printf("0");
			}
		}
		printf("\n");
	}

	return 0;
}