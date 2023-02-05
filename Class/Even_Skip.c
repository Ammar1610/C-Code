#include <stdio.h>
int main(){
    int num,i;
    printf("Enter limit:");
    scanf("%d",&num);
    for(i=1;i<=num;i+=2){
        printf("%d ",i);
    }
    return 0;
}
