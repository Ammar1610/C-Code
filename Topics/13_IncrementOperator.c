#include <stdio.h>
int main(){
    int a=4;
    // printf("the value of 'a' after increment is %d\n",a++);         O/P --> 4 and 5
    printf("the value of 'a' after increment is %d\n",++a);          //O/P --> 5 and 5

    // ++a will increment then print and a++ will print then increment.

    printf("the value of 'a' is %d\n",a);

    return 0;
}