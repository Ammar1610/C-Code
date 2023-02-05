//program to find year is leap year or not.

#include <stdio.h>
int main(){
    int year;
    printf("Enter year:");
    scanf("%d",&year);
    if((year%400==0) && (year%4==0)){
        printf("%d is a leap year,it has 366 days.",year);
    }
    else if(year%100==0){
        printf("%d is not a leap year",year);
    }
    else{
        printf("%d is not a leap year,it has 365 days.",year);
    }
    return 0;
} 