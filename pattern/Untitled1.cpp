#include <stdio.h>
int#include<stdio.h>
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
 main()
{
    int totalsales_person=0, totalsales_item=0, totalsales=0;
    int person[3][3];
    for (int person_num = 0; person_num < 3; person_num++)
    {
        for (int item = 0; item < 3; item++)
        {
            printf("Enter the number of item %d sold by person %d. ",item+1,person_num+1);
            scanf("%d", &person[person_num][item]);
        }
    }
    // total sale my each person
    for (int person_num = 0; person_num < 3; person_num++)
    {
        for (int item = 0; item < 3; item++)
        {
            totalsales_person += person[person_num][item];
        }
        printf("Total sales by person %d is %d \n",person_num+1,totalsales_person);
        totalsales_person=0;
    }
    //total sale of an item
    for (int item = 0; item < 3; item++)
    {
        for (int person_num = 0; person_num < 3; person_num++)
        {
            totalsales_item += person[person_num][item];
        }
        printf("Total sales of item %d is %d \n",item+1,totalsales_item);
        totalsales_item=0;
    }
    //total sales
    for (int person_num = 0; person_num < 3; person_num++)
    {
        for (int item = 0; item < 3; item++)
        {
            totalsales += person[person_num][item];
        }
    }
    printf("Total sales is %d ",totalsales);
}


