//this program will tell the number in fibonacci series according to its position
#include <stdio.h>
int fib(int n);
int main(){
    int n=3;
    printf("%d",fib(n));
    return 0;
}
int fib(int n){
    if(n<=1){
        return n;    
    }
    return fib(n-1) + fib(n-2);
}