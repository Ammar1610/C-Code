#include <stdio.h>
int main(){
    int i,j,n;
    printf("Enter number of rows:");
    scanf("%d",&n);
    for(i=n;i>=0;i--){              // this loop is for coloumn
        for(j=1;j<=i;j++){          //this loop is for row
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}