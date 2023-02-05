#include <stdio.h>
int main(){
    int a=0,b=1,c,n,i=0;
    printf("Enter limit:");
    scanf("%d",&n);
    printf("%d %d",a,b);
    while(i<n){
       c=a+b;
       a=b;
       b=c;
       printf(" %d",c);
       i++;
    }
    return 0;
} 