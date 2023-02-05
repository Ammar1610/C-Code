#include <stdio.h>
int main(){
    float sal,da,ta,hra;
    printf("Enter basic salary:");
    scanf("%f",&sal);
    da = 0.1*sal;
    ta = 0.12*sal;
    hra = 0.1*sal;
    float gs = sal + ta + da + hra;
    printf("Gross salary:%f",gs);
    return 0;
}