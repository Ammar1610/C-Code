#include <stdio.h>
int digSum(int num);
int main(){
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    printf("Sum of digits of %d is %d",a,digSum(a));
    return 0;}
int digSum(int num){
    int digit,sum=0;
    while(num>0){
        digit = num%10;
        sum += digit;
        num  /= 10;
    }
    return sum;
}    