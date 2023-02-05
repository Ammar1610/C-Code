//program to find income tax 
// 2.5L - 5.0L (5%)
// 5.0L - 10.0L (20%)
// above 10L (30%)

#include <stdio.h>
int main(){
    float income,tax = 0;
    printf("Enter your annual income:");
    scanf("%f",&income);
    if(income<2.5){
        printf("There is no income tax for you.");
    }
    if(income>=250000 && income<=500000){                            // or we can use (income>=250000 && income<=500000)
       tax += 0.05 * (income - 250000); 
    }
    if(income <= 500000 && income <= 1000000){
       tax += 0.2 * (income - 500000);  
    }
    if(income>=1000000){
       tax += 0.3 * (income - 1000000);  
    }
    printf("Your tax is %f",tax);
    return 0;
}