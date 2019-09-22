#include<stdio.h>
int main()
{
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<20;j++)
		{
			if(i%2==0)
			{
				if(j%5==0)
					printf("0");
				else
					printf("*");

			}
			else 
			{

				if(j%5==0)
					printf("*");
				else
					printf("0");

			}
				
		}
		printf("\n");
	}

return 0;
}