#include <stdio.h>
int main(){
    int n,avg=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        avg += i; 
    }
    avg /= n;
    printf("Average of first %d natural number is %d",n,avg);
    return 0;
}