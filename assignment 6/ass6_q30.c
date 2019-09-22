#include<stdio.h>
int main()
{

	for(int i=0;i<6;i++)
	{
		for(int j=0,f=5,s=3;j<2+i;j++)
		{
				if(j==0)
					printf("(5)");
				else
			{
				if(j==1)
					printf("(3)");
				else
				{
					int	t=f+s;
					printf("(%d)",t);
					f=s;
					s=t;
				}
			}

		}
		printf("\n");
	}
	return 0;
}