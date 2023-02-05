#include <stdio.h>
int sum(int n1,int n2);
int main(){
    int a,b;
    printf("Enter a number:");
    scanf("%d",&a);
    printf("Enter another number:");
    scanf("%d",&b);
    printf("Sum of both numbers is %d",sum(a,b));
    return 0;
}
int sum(int n1,int n2){
    return n1+n2;
}