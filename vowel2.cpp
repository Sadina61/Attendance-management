#include<stdio.h>
#include<string.h>
int main()
{
	int i,vowel=0,c=0;
	char st[50];
	printf("enter string");
	gets(st);
	for(i=0;i<strlen(st);i++)
	{
		if(st[i]=='a'||st[i]=='A'||st[i]=='e'||st[i]=='E'||st[i]=='I'||st[i]=='i'||st[i]=='O'||st[i]=='o'||st[i]=='u'
	||st[i]=='U')
		{
		
		vowel++;
	}
	else
	c++;
	}
	printf("the no of constant is %d",c);
	printf("the no of vowel is %d",vowel);
	
	
}

