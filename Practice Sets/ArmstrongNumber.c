

#include <stdio.h>
int main(){
    int num,orgnum,r,sum=0,i;
    printf("Enter a number to check if it is armstrong or not:");
    scanf("%d",&num);
    orgnum=num;
    while(orgnum != 0){
        r = orgnum%10;
        sum += r*r*r;
        orgnum /= 10;
    }
    if(sum==num)                       
        printf("%d is an armstrong number",num);
    
    else
        printf("%d is not an armstrong number",num);
    return 0;
}