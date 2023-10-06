#include<stdio.h>
#include<string.h>
int main()
{
 char str[100];
 int wcount=0,ccount=0,i;
 printf("enter the string\t");
 scanf("%[^\n]",str);
 for(i=0;str[i]!='\0';i++)
 {
 	if(str[i]==' ' && str[i+1]!=' ')
 	{
 		wcount=wcount+1;
	 }
}
	   for( i = 0; i < strlen(str); i++)  
        {
		if(str[i] != ' ')  
          {
			  ccount++; 
 }
}
    printf("number of words are %d:",wcount+1);
    printf("number of character are %d",ccount);

}
