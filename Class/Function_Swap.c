#include <stdio.h>
void swap(int n1,int n2);
int main(){
    int a,b;
    printf("Enter a number:");
    scanf("%d",&a);
    printf("Enter another number:");
    scanf("%d",&b);
    printf("Before Swapping:\n");
    printf("Value of A=%d\nValue of B=%d\n",a,b);
    printf("After Swapping:\n");
    swap(a,b);
    return 0;
}
void swap(int n1,int n2){
    int temp;
    temp=n1;
    n1=n2;
    n2=temp;
    printf("Value of A=%d\nValue of B=%d",n1,n2);
}