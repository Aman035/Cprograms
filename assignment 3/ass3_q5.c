//To calculate the slope of line
#include<stdio.h>
int main()
{
		float a,b,c;
		printf("Enter a,b,c of equation ax+by+c \n");
		scanf("%f %f %f",&a,&b,&c);
		if(b/a!=0)
			printf("The slope of the line is : %f",-(a/b));
		else 
			printf("Line is vertical");
		return 0;
}