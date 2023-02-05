//wap for calculator using switch case
#include <stdio.h>
int main()
{
    int n1,n2;
    char op;
    printf("Enter any operator from (+,-,*,/):");  
    scanf("%c",&op);
    printf("Enter first number:");
    scanf("%d",&n1);
    printf("Enter second number:");
    scanf("%d",&n2);
    switch(op) 
    {
        case '+':
            printf("%d + %d = %d",n1,nf
            2,n1+n2);
            break;
        case '-':
            printf("%d - %d = %d",n1,n2,n1-n2);
            break;
        case '*':
            printf("%d * %d = %d",n1,n2,n1*n2);
            break;
        case '/':
            printf("%d / %d = %d",n1,n2,n1/n2);
            break;
        default:
            printf("Wrong operator is used.");                
    }
        
    return 0;
}