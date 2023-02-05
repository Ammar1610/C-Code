#include <stdio.h>
void swap(int *x, int *y){
    int c = *x;
    *x = *y;
    *y = c;}
void display(int *s, int *c){
    printf("Swapped numbers are A= %d and B= %d", *s,*c);}
void main(){
    int a, b, c;
    printf("Enter the numbers to swap:\n");
    scanf("%d", &a);
    scanf("%d", &b);
    printf("Numbers before swapping are A= %d and B= %d\n", a, b);
    swap(&a,&b);
    display(&a,&b);}
