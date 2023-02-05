#include <stdio.h>
int main(){
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if(a==1){
        printf("Your number is 1");
    }
    else if(a==2){
        printf("Your number is 2");
    }
    else{                                                //last else is optional
        printf("Your number is greater than 2");
    }
    return 0;
}