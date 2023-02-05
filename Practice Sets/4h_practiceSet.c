#include <stdio.h>
int main(){
    int i=1,factorial=1,n;
    printf("Enter a number to get its factorial:");
    scanf("%d",&n);
    while(i<=n){
        factorial *= i;
        i++;
    }
    printf("The factorial of %d is %d",n,factorial);
    return 0;
}   