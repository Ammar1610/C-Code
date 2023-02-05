#include <stdio.h>
int main(){
    int sum = 0,i=1;
    while(i<11){
        sum += i;
        i++;
    }
    printf("The sum of first ten natural numbers is %d",sum);
    return 0;
}