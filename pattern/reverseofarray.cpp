#include<stdio.h>
int main()
{

int i,a[50],n;
printf("enter the number of array");
scanf("%d",&n);
printf("elements of array are\n");
for(i=0;i<=n;i++)
{ 
scanf("%d\n",&a[i]);	
}
printf("array in reversed order: ");
for(i=n-1;i>=0;i--)
{
	printf("%d",a[i]);
}
}

