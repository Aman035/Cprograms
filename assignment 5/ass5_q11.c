#include<stdio.h>
int main()

{
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<15;j++)
		{
			if(i%2==0)
			{
				if(j<i)
					printf("*");
				if(j==i)
					printf("0");
				if(j>i)
				{
					if(j%2==0)
						printf("*");
					else
						printf("0");
				}

			}
			else
			{
				if(j<=i)
					printf("0");
				else
					{
						if(j%2==0)
							printf("*");
						else
							printf("0");
					}

			}
			
		}
		printf("\n");
	}

	return 0;
}
