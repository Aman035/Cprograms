#include<stdio.h>
int main()

{
	int k=-2;
	for(int i=0;i<10;i++,k++)
	{
		for(int j=0;j<20;j++)
		{
			if((i+j<=7||(j-2*k)>=8)&&i>1)
				printf("*");
			else 
			{
				if(i<2)
				printf("*");
			else 
				printf("0");
			}
		}
		printf("\n");
	}

	return 0;
}