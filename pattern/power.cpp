#include<stdio.h>
#include<math.h>
int power(int,int);
int main()
{
	int x,y,p;
	printf("enter the value of x");
	scanf("%d",&x);
	printf("enter the value of y");
	scanf("%d",&y);
	p=power(x,y);
	printf("the power is %d",p);
}
int power(int x,int y)
{
	int p;
	p=pow(x,y);
	return p;
}
