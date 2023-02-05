#include <stdio.h>
int main(){
     int A = 5;
    //int B = 8.3;    //this is not recommended.
     float B = 8.3;
     char C = 'a';
     int D = 50;
     int E = 50+5;
     printf("The value of A is %d.\n",A);       //%d is for integers
     printf("The value of B is %f.\n",B);       //%f is for float
     printf("The value of C is %c.\n",C);       //%c is for character
     printf("Sum of A and D is %d \n",A+D);     
     printf("The value of E is %d.\n",E);
     return 0;
}