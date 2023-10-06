#include<stdio.h>
void sort(char**);
int main()
{
	char *name[5];
	int i;
	printf("enter five words");
	for(i=0;i<5;i++)
	{
		gets(name[i]);
	}
	sort(name);
	printf("sorted name list are\n");
	for(i=0;i<5;i++)
	{
		puts(name[i]);
	}
	return 0;
	
}
void sort (char*name[])
{
	char temp;
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(strcmp(name[i],name[j])>0)
			{
				temp=name[i];
				name[i]=name[j];
				name[j]=temp
			}
		}
	}
	
}
