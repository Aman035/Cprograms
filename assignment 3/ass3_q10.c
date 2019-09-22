#include<stdio.h>
int main()
{
		int a,b,c,d,x,ct=0;
		printf("Enter value of a,b,c,d and x\n");
		scanf("%d %d %d %d %d",&a,&b,&c,&d,&x);
		
		if(x==a)
			ct++;

		if(x==b)
			ct++;
			
		if(x==c)
			ct++;
			
		if(x==d)
			ct++;
		printf("Output : %d",ct);
		return 0;
			
}