#include<stdio.h>
int main()
{
		int k=0;
	for(int i=5;i>0;i--,k=0)
	{
		for(int j=1;j<6;j++)
		{
			if(j<i)
				printf(" ");
			else
				printf("%c",(65+ k++));
		}
		k--;
		for(int j=5;j>i;j--)
			printf("%c",65+ --k);
		
		printf("\n");
	}
return 0;
}