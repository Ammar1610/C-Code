#include <stdio.h>
int main(){
    int n,i,k;
    printf("Enter number of elements:\n");
    scanf("%d",&n);
    k=n;
    int a[n],b[n],c[50];
    printf("Enter first array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        c[i]=a[i];
    }
    printf("Enter second array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&b[i]);
        c[k]=b[i];
        k++;
    }
    printf("Merged array --> ");
    for(i=0;i<k;i++){
        printf("%d ",c[i]);
    }
    return 0;
}