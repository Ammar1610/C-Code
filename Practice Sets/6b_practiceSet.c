#include <stdio.h>
int address(int i);
int main(){
    int i = 4;
    printf("The address of i is %d\n",&i);
    printf("The address of i is %d\n",address(i));
    return 0;
}
int address(int i){
    int address = &i;
    return address;
}