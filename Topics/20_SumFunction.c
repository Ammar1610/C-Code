#include <stdio.h>
//sum is a function which takes a and b as input and gives a integer as output.
//variables can be same in main and function definition.(having different values)
int sum(int a,int b);          //function prototype declaration
int main(){
    // sum(2,3);
    int c;
    c = sum(2,3);                   //function call
    printf("The value of c is %d",c);
    return 0;
}  
int sum(int a,int b){                    //function definition
    // printf("%d + %d = %d",a,b,a+b);
    int result;
    result = a+b;
    return result;
}