#include <stdio.h>
int main(){
    int a,b;
    printf("Enter value of a:");
    scanf("%d",&a);
    printf("Enter value of b:");
    scanf("%d",&b);
    if(a>b){
        printf("a is greater than b");
    }
    else{
        printf("b is greater than a");
    }
    return 0;
}