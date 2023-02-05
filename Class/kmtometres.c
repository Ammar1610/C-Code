//The distance between two cities (in Km) is input through the keyboard. Write a program to convert and print this distance in meters & feet.

#include <stdio.h>
int main(){
    float KM,metre,feet;
    printf("Enter the distance in KiloMetres:");
    scanf("%f",&KM);
    metre = KM *1000;
    printf("Distance in metres is %.2f\n",metre);
    feet = KM * 3280.84;
    printf("Distance in feet is %.2f",feet);
    return 0;
}