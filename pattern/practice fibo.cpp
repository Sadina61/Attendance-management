
//fibonase series
#include<stdio.h>
void fibo(int);
int main()
{
	int n;
	printf("enter the value of n:");
	scanf("%d",&n);
	printf("fibonase series is:");
	fibo(n);
	return 0;
}
void fibo(int n)
{
	int a=0,b=1,t=0,i;
	printf("%d\t%d",a,b);
	for(i=2;i<n;i++)
	{
		 t=a+b;
		 printf("\t%d",t);
      a=b;
      b=t;
     
     
		
		
	}
}

