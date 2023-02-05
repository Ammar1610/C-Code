#include <stdio.h>
int main(){
    int a=0,skip=4;
    while(a<10){
        a++;
        if(a!=skip){
            continue;                //continue will not allow the loop to run until a==skip.
        }                            //when a=4,the else statment runs.
        else{
            printf("%d\n",a);
        }
    }
    return 0;
}