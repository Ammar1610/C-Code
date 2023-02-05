#include <stdio.h>

int main()
{
    int num1=0,num2=1,num3,number;
    printf("Upto which you want fibonacci series?\n");
    scanf("%d",&number);
    printf("%d%d",num1,num2);
    for(int i=2;i<number;++i){
        num3=num1+num2;
        printf("%d",num3);
        num1=num2;
        num2=num3;
    }
   

    return 0;
}