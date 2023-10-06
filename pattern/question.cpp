#include<stdio.h>
int first(int);
int second(int);
int main()
{
	int n;
	printf("enter the number");
	scanf("%d",&n);
	 printf("the ans is %d",first(n));
	return 0;
	
}
int first(int n)
{
	return n*n;
	printf("the ans is %d",second(n));
}
int second(int n)
{
	return n*n;
	
}
