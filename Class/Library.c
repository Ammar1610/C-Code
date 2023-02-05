#include <stdio.h>
int main(){
    int day;
    printf("Enter the number of days the person is late:");
    scanf("%d",&day);
    if(day<=5){
        printf("As you are late by %d, your fine is 50paise\n",day);
    }
    else if(day>5 && day<=10){
        printf("As you are late by %d, your fine is 1rupees\n",day);
    }
    else if(day>10 && day<31){
        printf("As you are late by %d, your fine is 5rupees\n",day);
    }
    else if(day>30){
        printf("You are late by more than 30 days, your membership is cancelled.");
    }
    return 0;
}