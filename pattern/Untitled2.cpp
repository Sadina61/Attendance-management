#include<stdio.h>
int main()
{
	char a[11]="computer";
	int i,count=0;
	for(i=0;i<=8;i++)
	{
	
		if (a[i]=='a'|| a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' )
		{
			count=count+1;
		}
	 }
    printf("vowel count=%d",count);
		return 0;
}
