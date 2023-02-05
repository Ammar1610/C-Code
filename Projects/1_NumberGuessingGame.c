#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int random,guess,nguesses=1;
    srand(time(0)); 
    random = rand()%100 + 1;
    // printf("The number is %d",random);
    do{
        printf("Guess the number between 1-100:\n");
        scanf("%d",&guess);
        if(guess>100){
            printf("You are supposed to guess a number between 1-100 !!!\n");
        }
        else if(guess>random){
            printf("Lower number please!!\n");
        }
        else if(guess<random){
            printf("Greater number please!!\n");
        }
        else{
            printf("You guessed the correct number in %d attempts\n",nguesses);
        }
        nguesses++;
    }while(random!=guess);
    return 0;
}