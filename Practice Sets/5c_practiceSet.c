#include <stdio.h>
float force(float mass);
int main(){
    float m;
    printf("Enter the value of mass in kg:");
    scanf("%f",&m);
    printf("The force in Newton is %.2f",force(m));
    return 0;
}

float force(float mass){
  float result = mass*9.8;
  return result; 
}