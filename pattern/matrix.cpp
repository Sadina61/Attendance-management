#include<stdio.h>
int main()
{

int m,n,i,j,a[10][10],b[10][10],s[10][10];
printf("enter the size of row and column");
scanf("%d%d",&m,&n);
for(i=0;i<m;i++)
{
	for (j=0;j<n;j++)
	{
		printf("enter first matrix elements");
		scanf("%d",&a[i][j]);
	}
}
    for(i=0;i<m;i++)
{
	for (j=0;j<n;j++)
	{
		printf("enter second matrix elements");
		scanf("%d",&b[i][j]);
	}
}
for (i=0;i<m;i++)
{
	for (j=0;j<n;j++)
	{
	
s[i][j]=a[i][j]+b[i][j];
}
}
printf("\nthe sum of matrix is:\n");


    for(i=0;i<m;i++)
{
	for(j=0;j<n;j++)
	{
		printf("%d\t",s[i][j]);
		if (j == n - 1)
		printf("\n\n");
	}
}
return 0;
}

