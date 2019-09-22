#include<stdio.h>
int main()
{
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<5;j++)
		{
			if(i%2==0)
				printf("0*");
			else 
				printf("*0");
		}
		printf("\n");
	}

return 0;
}