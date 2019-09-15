#include<stdio.h>
#include<math.h>
int main()
{
int a,b ;
printf("enter two number\n");
scanf("%d %d",&a,&b);
int result=(pow(a,2)+pow(b,3));
printf("the required ouput is %d\n",result );
return 0;
}