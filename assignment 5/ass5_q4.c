#include<stdio.h>
int main()
{
	for(int i=0;i<6;i++)
	{
		for(int j=0;j<30;j++)
		{
			if(i%2==0)
				printf("0");
			else 
				{
					if(j%3==0||j%5==0)
						printf("*");
					else 
						printf("0");
				}
		}
		printf("\n");
	}

return 0;
}