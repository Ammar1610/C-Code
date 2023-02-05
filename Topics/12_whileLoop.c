#include <stdio.h>
int main(){
    int i = 0;
    
    while(i<21){
        if(i>9 && i<21){
          printf("The value of i is %d\n",i);
        }
        i++;
    }
    return 0;
}