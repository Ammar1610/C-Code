#include <stdio.h>
int main(){
    int num,reverse_num = 0,digit,orgnum;
    printf("Enter a number:");
    scanf("%d",&num);
    orgnum = num;
    while (num != 0){
        digit = num%10;
        reverse_num = reverse_num*10 + digit;
        num /= 10; 
    }
    printf("Reverse of the %d is %d",orgnum,reverse_num);
    return 0;
}