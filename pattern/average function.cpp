#include<stdio.h>
int avg(int,int,int,int,int);
int main()
{
	int a,b,c,d,e;
	printf("enter the value");
	scanf("%d\t%d\t%d\t%d\t%d",&a,&b,&c,&d,&e);
	printf("the average is %d",avg(a,b,c,d,e));
}
int avg(int a,int b,int c,int d,int e)
{
	int avg;
	avg=(a+b+c+d+e)/5;
	return avg;
}
	
