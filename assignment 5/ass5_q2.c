#include<stdio.h>
int main()
{
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<20;j++)
		{
			if((j<8&&i<3)||(j>14&&i>6))
				printf("0");
			else 
				printf("*");
		}
		printf("\n");
	}

return 0;
}