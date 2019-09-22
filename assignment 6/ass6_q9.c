#include<stdio.h>
int main()
{
		for(int i=65;i<71;i++)
		{
			printf("%c",i);
		}

			printf("\n");

			for(int j=1;j<6;j++)
			{    
				printf("     ");
				for(int k=65;k<71-j;k++)
					printf("%c",k);
					printf("\n");

			}
		

		return 0;
}
