#include <stdio.h>
int main(){
    int n,i;
    printf("Enter number of elements:");
    scanf("%d",&n);
    int a[n],min,temp;
    printf("Enter elements:\n");
    for(int i=0;i<n;i++){ 
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++){
        min=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min=j;
            }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
        }
    }
    for(int i=0;i<5;i++){
        printf("%d ",a[i]);
    }
    return 0;
}