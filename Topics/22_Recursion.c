//factorial(n) = factorial(n-1) * n

#include <stdio.h>
int factorial(int a);
int main(){
    int fact;
    fact = 3;
    printf("The factorial of %d is %d",fact,factorial(fact));
    return 0;
}
int factorial(int a){
    if(a==1 || a==0){
        return 1;
    }
    else{
        return a*factorial(a-1);
    }
}