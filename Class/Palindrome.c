#include <stdio.h>
int main(){
    int a,c,b=0;
    printf("enter your number here:");
    scanf("%d",&a);
    int d=a;
    while(a!=0){
        c=a%10;
        b=(b*10+c);
        a/=10;
    }
    if(b==d){
         printf("the number is palindrome:%d",d);
         }
    else{
        printf("the number is not palindrome");
    }    
    return 0;
}