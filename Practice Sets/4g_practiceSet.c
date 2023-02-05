// #include <stdio.h>
// int main(){
//     int fact;
//     printf("Enter a Number to get its factorial: ");
//     scanf("%d",&fact);
//     int num;
//     for(num=fact-1;num;num--){
//         fact *= num;
//     }
//     printf("The factorial is %d",fact);
//     return 0;
// }

#include <stdio.h>
int main(){
    int i,factorial=1,n;
    printf("Enter a Number to get its factorial: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        factorial *= i;
    }
    printf("The value of factorial %d is %d",n,factorial);
    return 0;
}