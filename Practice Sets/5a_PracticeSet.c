 #include <stdio.h>
 float avg(int a,int b,int c);
 int main(){
    int a,b,c;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    printf("Enter third number:");
    scanf("%d",&c); 
    printf("The average of %d,%d and %d is %f",a, b, c,avg(a,b,c));
    return 0;
}

float avg(int a,int b,int c){
    float avg = (float)(a+b+c)/3;
    return avg;
}