#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(){
    int i,j,k,m,n,p,q;
    printf("enter rows and coloum of matrix 1:\n");
    scanf("%d%d",&m,&n);
    printf("enter rows and coloum of matrix 2:\n");
    scanf("%d%d",&p,&q);
    int m1[m][n];
    int m2[p][q];
    int m3[m][q];
    if(n==p){
        printf("multiplication is possible\n");}
    else{
        printf("multiplication is not possible");
         exit(0);}
    printf("enter the elements of matrix 1:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("enter element %d%d:",i,j);
            scanf("%d",&m1[i][j]);}}
    printf("enter the elements of matrix 2:\n");
    for(i=0;i<p;i++){
        for(j=0;j<q;j++){
            printf("enter element %d%d:",i,j);
            scanf("%d",&m2[i][j]);}}
    printf("matrix 1 is:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",m1[i][j]);}
        printf("\n");}
    printf("matrix 2 is:\n");
    for(i=0;i<p;i++){
        for(j=0;j<q;j++){
            printf("%d ",m2[i][j]);}
        printf("\n");}
    for(i=0;i<m;i++){
        for(j=0;j<q;j++){
            for(k=0;k<n;k++){
                m3[i][j]=0;
                m3[i][j]+=m1[i][k]*m2[k][j];}}}
    printf("resultant matrix m3 is:\n");
    for(i=0;i<m;i++){
        for(j=0;j<q;j++){
            printf("%d ",m3[i][j]);}
        printf("\n");}
    return 0;}