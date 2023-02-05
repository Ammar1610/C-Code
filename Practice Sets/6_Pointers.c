#include <stdio.h>
int main(){
    int a = 3;
    printf("The address of a is %d\n",&a);
    printf("The value at &a is %d\n",*(&a));
    return 0;
}