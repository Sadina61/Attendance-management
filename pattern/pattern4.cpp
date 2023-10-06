#include<stdio.h>
int main()
{
	int i,j;
	char st[100]="PULCHOWK";
	for(i=0;i<8;i++)
	{
		for(j=0;j<=i;j++)
		{
			if(j%2==0)
			{
			printf("%c",st[j]);}
			else
		{
				printf("%c",st[j]+32);
				}
		}
		printf("\n");
	}
	return 0;
}
