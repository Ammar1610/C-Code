#include <stdio.h>
int main(){
    int n=3;
    for(int j=1;j<=n;j++){
        for(int i=0;i<(2*j-1);i++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}


//Same pattern opposite direction.


// #include <stdio.h>
// int main(){
//     int n=3;
//     if(n==1){
//         printf("*\n");
//     }
//     for(n;n>0;n--){
//         for(int i=0;i<(2*n-1);i++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }


