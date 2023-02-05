#include<stdio.h>
int sum(int *x, int *y){
int c=0;
c=*x+*y;
return c;}

int main(){
int a,b;
printf("Enter a number:");
scanf("%d",&a);
printf("Enter another number:");
scanf("%d",&b);
int c= sum(&a,&b);
printf("Sum of %d and %d = %d",a,b,c);
}
