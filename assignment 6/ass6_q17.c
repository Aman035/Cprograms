#include<stdio.h.>
int main()
{
		int l=0;
	for(int i=1,k=6;i<=6;i++,k--,l=i)
	{
		for(int j=1;j<=k*i;j++)
		{
			printf("%c",64+l);
			if(j%i==0)
				l++;
		}
		printf("\n");
	}
}