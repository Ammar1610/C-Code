#include <stdio.h>
int main(){
    int r,c;
    printf("Enter number of rows:");
    scanf("%d",&r);
    printf("Enter number of columns:");
    scanf("%d",&c);
    int m[r][c],m1[r][c],m2[r][c],i,j;
    printf("Enter first matrix:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&m1[i][j]);}}
    printf("Enter second matrix:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&m2[i][j]);}}
    printf("Sum of first and second matrix:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
           m[i][j]=m1[i][j]+m2[i][j];
           printf("%d ",m[i][j]);}
        printf("\n");}
    return 0;}