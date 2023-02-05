#include <stdio.h>
int main(){
     int age;
     int vip=0;
     vip=1;
     printf("Enter your age:");
     scanf("%d",&age);
     if((age>=18 && age<=80) || (vip==1)){            //&& is AND operator and || is OR operator. 
         printf("Your age is legal for driving");
     }
     else{
         printf("Your should not be driving");
     }
    return 0;
}