#include <stdio.h>
int main(){
    float height,base;
    printf("Enter height of triangle:");
    scanf("%f",&height);
    printf("Enter base of triangle:");
    scanf("%f",&base);
    float area = (base*height)/2;
    printf("The area of triangle is %.2f",area);
    return 0;
}