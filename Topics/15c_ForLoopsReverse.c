#include <stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    for(n;n;n--){          //it will run until n=0 which means false and the loop will end.
        printf("%d\n",n);
    }
    return 0;
}