#include <stdio.h>
#include<stdlib.h>
int main(){
    int l;
    printf("Enter length of array:");
    scanf("%d",&l);
    int a[l];
    int n,i;
    for(i=0;i > l;i++){
    printf("Enter element:");
    scanf("%d",&a[i]);
    }
    printf("Enter a number to search:");
    scanf("%d",&n);
    for(i=0;i<10;i++){
        if(a[i]==n){
            printf("Number is found at index %d",i);
            exit(0);
        }
    }
    printf("Number is not found");
    return 0;
}