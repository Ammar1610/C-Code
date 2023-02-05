#include <stdio.h>
int main(){
    int a,b,temp;
    printf("Enter value of a:");
    scanf("%d",&a);
    printf("Enter value of b:");
    scanf("%d",&b);
    temp = a;
    a = b;
    b = temp;
    printf("Value of 'a' after swap = %d\n",a);
    printf("Value of 'b' after swap = %d\n",b);
    return 0;
}