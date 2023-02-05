#include <stdio.h>
int main(){
    int a;
    int b;
    printf("Enter the value of first number:");
    scanf("%d",&a);       //& is the "address of" operator 
    printf("Enter the value of first number:");
    scanf("%d",&b);
    printf("The sum of numbers is %d \n",a+b);
    return 0;
}