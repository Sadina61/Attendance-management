#include<stdio.h>
#include<string.h>
int main(){
  int i,j,k;
  char s[10]= "NepaL";
  for(i=0;i<5;i++){
    for(k=4;k>i;k--){
        printf(" ");
    }
    for(j=1;j<=(2*i+1);j++){
        printf("%c",s[i]);
    }
    printf("\n");
  }
  return 0;
}

