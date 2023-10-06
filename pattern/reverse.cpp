#include <stdio.h>
int rev(int);
int main()
{
    int n;
    printf("Enter the multidigit no.");
    scanf("%d",&n);
    printf("\n the reverse of %d is %d",n,rev(n));
}


int rev(int a)
{
    int i,b=0,r;
    while(a!=0)
    
    {
        r=a%10;
        b=b*10+r;
        a=a/10;
    }
    return b;
}

