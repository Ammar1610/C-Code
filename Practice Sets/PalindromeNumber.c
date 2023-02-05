#include <stdio.h>
int main(){
    int num,reversed=0,digit,orgnum;
    printf("Enter a number to check if it is palindrome or not:");
    scanf("%d",&num);
    orgnum = num;
    while(num != 0){
        digit = num%10;
        reversed = reversed*10 + digit;
        num /= 10;
    }
    if(reversed==orgnum)
        printf("%d is a palindrome number",orgnum);
    else
        printf("%d is not a palindrome number",orgnum);
    
    return 0;
}