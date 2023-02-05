#include <stdio.h>
int main(){
    int r,c;
    printf("Enter number of rows and columns:\n");
    scanf("%d%d",&r,&c);
    int m[r][c];
    printf("Enter elements of marix:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Element %d%d :",i,j);
            scanf("%d",&m[i][j]);}}
    printf("Matrix:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d",m[i][j]);}
        printf("\n");} 
    printf("Matrix after transpose:\n");       
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d",m[j][i]);}
        printf("\n");}    
        
    return 0;
}