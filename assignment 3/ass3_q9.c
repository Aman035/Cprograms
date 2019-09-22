#include<stdio.h>
int main()
{
		int a,b,c,d,x;
		printf("Enter value of a,b,c,d and x\n");
		scanf("%d %d %d %d %d",&a,&b,&c,&d,&x);
		
		if(x==a)
			printf("\nx is equal to : %c",'a');
		else if(x==b)
			printf("\nx is equal to : %c",'b');
		else if(x==c)
			printf("\nx is equal to : %c",'c');
		else if(x==d)
			printf("\nx is equal to : %c",'d');
}