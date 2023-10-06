#include<stdio.h>
int main()
{
	char vowel[10]="pulchowk";
	int i=0;
	int count=0;
	for(i=0;i<=8;i++)
	{
		if (vowel[i]=='a'||(vowel[i])=='e'||vowel[i]=='i'||vowel[i]=='o'||vowel[i]=='u')
		{
			count++;
		}

	}
	printf("number of vowel is %d",count);
	return 0;
	
}
