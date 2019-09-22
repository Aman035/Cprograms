#include<stdio.h>
int main()
{
		for(int i=65;i<71;i++)

		{

			for(int j=65,a=97;j<71;j++)
			{
				if(j>i)
				{	printf("%c",a);
					a++;
				}
				else
					{
						printf("%c",j);
						}

			}
			printf("\n");

		}
		return 0;
}