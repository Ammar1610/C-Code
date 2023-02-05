//program to know the grade according to users marks.

#include <stdio.h>
int main(){
    int marks;
    printf("Enter your marks:");
    scanf("%d",&marks);
    
    switch(marks/10){
        case 10:
        case 9:
            printf("Your Grade is A");
            break;
        case 8:
            printf("Your Grade is B"); 
            break;
        case 7:
            printf("Your Grade is C"); 
            break;   
        case 6:
            printf("Your Grade is D");
            break;
        case 5:
            printf("Your Grade is E"); 
            break;
        default:
            printf("Your Grade is F");                
    }
    return 0;
}