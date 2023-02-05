//NOT WORKING
#include <stdio.h>
int main(){
    int i,j,n,m,arr1[n],arr2[m],arr3[n+m];                          // arr1 = [2,3,4,5]
    printf("Enter length of first array:");                         // arr2 = [1,6,7,8,9]
    scanf("%d",&n);
    printf("Enter elements of first array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    printf("Enter length of second array:");
    scanf("%d",&m);
    printf("Enter elements of second array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr2[i]);
    }
    i=j=0;
    int k;
    for(k=0;i<n+m;i++){
        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            i++;
        }
        else if(arr1[i]>arr2[j]){
            arr3[k]=arr2[j];
            j++;
        }
        
    }
    printf("Merged array is:\n");
    for(i=0;i<n+m;i++){
        printf("%d",arr3[i]);
    }

    return 0;
}