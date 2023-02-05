#include <stdio.h>
int sum(int n);
int main(){
    int num;
    printf("Enter the numbers upto which you want the sum:");
    scanf("%d",&num);
    printf("The sum of first %d natural numbers is %d",num,sum(num));
    return 0;
}

int sum(int n){
    if(n==1){
        return 1;
    }
    else{
        return n + sum(n-1);
    }
}