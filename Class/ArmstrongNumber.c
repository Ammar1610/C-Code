#include <stdio.h>
int main(){
    int num,num2,r,sum=0,i;
    printf("Enter a number:");
    scanf("%d",&num);
    num2=num;
    while(num2 != 0){
        r = num2%10;
        sum += r*r*r;
        num2 /= 10;}
    if(sum==num){                       
        printf("%d is an armstrong number",num);}
    else{
        printf("%d is not an armstrong number",num);}
    return 0;
}