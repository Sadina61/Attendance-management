#include<stdio.h>
int main()
{
	int n,count=0,i,j;
	printf("enter a number");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
	
			count=0;
	
	for(j=1;j<=i;j++)
		{
		if (i%j==0)
	
		{
			count=count+1;}
	}


		if(count==2)
	
	printf(" %d",i);
	
	
}

return 0;	
}
	

