#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter value of a:");
    scanf("%d",&a);
    printf("Enter value of b:");
    scanf("%d",&b);
    printf("Enter value of c:");
    scanf("%d",&c);
    if(a>b){
          if(a>c){
            printf("%d is greater than %d and %d",a,b,c);
               }
          else{
            printf("%d is greater than %d and %d",c,a,b);
              }
            }
    else{
        if(b>c){
            printf("%d is greater than %d and %d",b,a,c);
               }
        else{
            printf("%d is greater than %d and %d",c,a,b);
            }     
        }
      
    return 0;
}