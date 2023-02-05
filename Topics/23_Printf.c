#include <stdio.h>
int main(){
    int a = 3;
    printf("%d %d %d",a,++a,a++);    //order of compiling of gcc is from right to left.
    return 0;
}