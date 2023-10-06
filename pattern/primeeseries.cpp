#include<stdio.h>
int main()
{
    int i,j,x,n,count;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        x=i;
        count=0;
    for(j=2;j<x;j++){
        if(x%j==0){
            count=count+1;
        }

    }
    if(count == 0){
        printf("%d\n",x);
    }
}
}
