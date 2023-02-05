#include <stdio.h>
void main(){
    int i, j, t,l;
    printf("Enter the length:");
    scanf("%d",&l);
    int a[l];
    for (i = 0; i < l; i++){
        printf("Enter the number:");
        scanf("%d", &a[i]);
        }
    for(i=0;i<l;i++)
        for(j = 0;j<l; j++){
            if(a[j]>a[j + 1]){
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    for (i = 0; i < l; i++){
        printf(" %d ", a[i]);
    }
}
//[22,12,23,1,43]

//[1,12,22,23,43]