#include<stdio.h>
void check(int,int);
int main()
{
	int a,b;
	printf("enter two numbers:");
	scanf("%d%d",&a,&b);
	check(a,b);
	
	return 0;
}
void check(int a,int b)
{
 if(a>b)
 printf("largest value is %d",a);
 else
 printf("largest value is %d",b);
	
}
