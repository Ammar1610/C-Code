// If the marks obtained by a student in five different subjects are input through the keyboard, write a program to find out the aggregate marks and percentage marks obtained by the student. Assume that the maximum marks that can be obtained by a student in each subject is 100

#include <stdio.h>
int main(){
    float sub1,sub2,sub3,sub4,sub5,aggregate;
    float percentage;

    printf("Enter marks of all five subjects:");
    scanf("%f%f%f%f%f",&sub1,&sub2,&sub3,&sub4,&sub5);

    aggregate = sub1+sub2+sub3+sub4+sub5;
    percentage = ((aggregate)/500)*100;

    printf("Aggregate marks = %.2f\n",aggregate);
    printf("Percentage = %.2f\n",percentage); 
    return 0; 
}