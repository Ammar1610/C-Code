#include <stdio.h>
int main(){
    int num,i;
    printf("Enter a number to check if it is prime or not:");
    scanf("%d",&num);
    for(i=2;i<num;i++){
        if(num%i==0)
        printf("%d is not a prime number",num);
        else
        printf("%d is a prime number",num);
        break;
      }
        if(num==1)
            printf("1 is neither prime nor composite");
        else if(num==2)
            printf("2 is a prime number");    
      
    return 0;
}