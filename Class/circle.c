#include <stdio.h>
int main(){
   int radius;
   float pi = 3.14;
   printf("Enter radius of circle:");
   scanf("%d",&radius);
   float area = pi*radius*radius;
   float cirumference = 2*pi*radius;
   printf("The area of circle is %.2f\n",area);
   printf("The circumference of circle is %.2f\n",cirumference);
   return 0;
}
