//To check whether triangle is right angled or not
#include<stdio.h>
int main()
{
		float a,b,c;
		printf("Enter the 3 sides of triangle in descending order\n");
		scanf("%f %f %f",&a,&b,&c);
		if(a*a==b*b+c*c)
			printf("Triangle is right angled");
		else 
			printf("Not right angled triangle");
		return 0;

}