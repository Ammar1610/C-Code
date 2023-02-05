#include <stdio.h>
void armstrong(int num);
int main(){
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    armstrong(a);
    return 0;
}
void armstrong(int num){
    int orgnum,r,sum=0;
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
}