#include<stdio.h>
#include<string.h>
int main()
{
	char st[100]="advanced";
	int i,j;
	for(i=0;i<strlen(st);i++)
	{
		for(j=0;j<=i;j++)
		{ printf("%c",st[j]);
	}
	printf("\n");

}
}
