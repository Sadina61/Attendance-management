#include<stdio.h>
int main()
{
	char ch[100]="PROGRAMMING";
	int i,j,k;
	for(i=0;i<11;i++)
	{
		for(j=i;j<11-i;j++)
		{
			printf("%c",ch[j]);
			
		}
		printf("\n");
		
	}
	return 0;
}

