#include <stdio.h>
int main(){
    int num =8;
    int sum =0,i=1;
    while(i<11){
        sum += num*i;
        i++;
    }
    printf("The sum of numbers occuring in the table of 8 is %d",sum);
    return 0;
}