#include <stdio.h>
int main(){
    int n,i;
    printf("Enter number of elements:");
    scanf("%d",&n);
    float a[n],sum=0;
    float avg;
    for(i=0;i<n;i++){
        printf("Enter number %d:",i+1);
        scanf("%f",&a[i]);
    }
    for(i=0;i<n;i++){
        sum += a[i];
    }
    avg = sum/n;
    printf("Average calculated is %.2f",avg);
    return 0;
}