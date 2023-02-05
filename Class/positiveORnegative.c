#include <stdio.h>
int main(){
    int a;
    printf("Enter a:");
    scanf("%d",&a);
    if(a>0){
        printf("a is positve");
    }
    else if(a<0){
        printf("a is negative");
    }
    else{
        printf("a is neither positive nor negative");
    }

    return 0;
}