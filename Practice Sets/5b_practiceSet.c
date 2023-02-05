#include <stdio.h>
int convert(int temp);
int main(){
    int celcius;
    printf("Enter temperature in celcius:\n");
    scanf("%d",&celcius);
    printf("%d degree celcius in fehrenhiet is %d degree fehrenhiet.",celcius,convert(celcius));
    return 0;
}

int convert(int temp){
    int fehrenhiet = (temp * 9/5) + 32;
    return fehrenhiet;
}