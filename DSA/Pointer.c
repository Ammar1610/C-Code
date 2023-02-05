#include <stdio.h>
int main(){
    int a=10;
    int *p=&a;
   // p=&a;
    printf("%d %d",a,*p);
    return 0;
}