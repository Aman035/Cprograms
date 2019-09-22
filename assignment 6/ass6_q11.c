#include<stdio.h>
int main()
{
	for(int i=65;i<71;i++)

		{

			for(int j=65;j<71;j++)
			{
				if(j>=i)
					printf("%c",j);
				else
					printf(" ");

			}
			printf("\n");

		}

		return 0;
}
