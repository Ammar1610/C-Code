#include <stdio.h>
int main(){
    int a,b,c,d;
    printf("Enter value of a:");
    scanf("%d",&a);
    printf("Enter value of b:");
    scanf("%d",&b);
    printf("Enter value of c:");
    scanf("%d",&c);

    d = (a>b ? (a>c?5:6) : (b>c?7:8));
    printf("%d",d);
    return 0;
}