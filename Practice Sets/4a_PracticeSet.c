#include <stdio.h>
int main(){
    int num,i=1;
    printf("Enter a Number to get its table:");
    scanf("%d",&num);
    while(i<11){
        printf("%d x %d = %d\n",num,i,num*i);
        i++;
    }
    return 0;
}