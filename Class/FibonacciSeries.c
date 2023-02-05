#include <stdio.h>
int main(){
    int a=0,b=1,c,n,i=0;
    printf("Enter limit:");
    scanf("%d",&n);
    printf("%d %d",a,b);
    for(i=2;i<n;i++){
       c=a+b;
       a=b;
       b=c;
       printf(" %d",c);
    }
    return 0;
} 