#include<stdio.h>
int main()
{
	for(int i=0;i<13;i++)
	{
		for(int j=0;j<17;j++)
		{
				if(i!=0&&i!=12)
				{
						if(i<=4)
						{

								if(i==2)
									i++;
							if((j<=5-i||j>9+i))
								printf("0");
							else 
								printf("*");

						}
						if(i==5||i==6||i==7)
						{
							if((j<=1||j>14))
								printf("0");
							else 
								printf("*");
						}
						if(i>7)

						{
							if(i==10)
								i++;
							if((j<=i-6||j>21-i))
								printf("0");
							else 
								printf("*");

						}
				}
				else
					printf("0");
		}
		printf("\n");
	}

return 0;
}