#include<stdio.h>
 int swap(int*,int*);
int main()
{
	int x=1,y=2;
	printf("before swapping X=%d, Y=%d\n",x,y);
	swap(&x,&y);
	printf("after swapping X=%d, Y=%d",x,y);

   
   
   
	return 0;
}
int swap(int*a,int*b)
{
	int temp;
	temp=*b;
	*b=*a;
	*a=temp;
		
	
}
