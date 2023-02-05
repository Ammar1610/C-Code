//pass or fail program

#include <stdio.h>
int main(){
    int physics,chemistry,maths;
    float total;
    printf("Enter Your marks in Physics:");
    scanf("%d",&physics);
    printf("Enter Your marks in Chemistry:");
    scanf("%d",&chemistry);
    printf("Enter Your marks in Maths:");
    scanf("%d",&maths);
    total = (physics + chemistry + maths)/3;
    if((total<40) || physics<33 || chemistry<33 || maths<33){
        printf("Your Percentage is %f, you failed",total);
    }
    else{
        printf("Your percentage is %f, you passed",total);
    }
    return 0;
}