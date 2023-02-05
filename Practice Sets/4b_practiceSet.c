#include <stdio.h>
int main(){
    int num,i=10;
    printf("Enter a number to print its table:");
    scanf("%d",&num);
    while(i){
        printf("%d * %d = %d\n",num,i,num*i);
        i--;
    } 
    return 0;
}