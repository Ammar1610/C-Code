#include <stdio.h>
int main(){
    int a;
    printf("Enter a number:");
    scanf("%d",&a);

    (a<5) ? printf("Number is less than 5") : printf("Number is greater than to 5");    
    return 0;
} 