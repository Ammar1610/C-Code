//program to find greatest no. (among 4 numbers)

#include <stdio.h>
int main(){
    int a,b,c,d;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    printf("Enter third number:");
    scanf("%d",&c);
    printf("Enter fourth number:");
    scanf("%d",&d);
    int max;
    if(a>b && a>c && a>d){
        printf("%d is greatest of all the four.",a); 
    }
    else if(b>a && b>c && b>d){
        printf("%d is the greatest of all the four.",b);    
    }
    else if(c>a && c>b && c>d){
        printf("%d is the greatest of all the four.",c);    
    }
    else if(d>a && d>b && d>c){
        printf("%d is the greatest of all the four.",d);    
    }
    return 0;
}