#include <stdio.h>
int main(){
    int i=23;
    int *j = &i;      //*j means the value stored at the address stored in j and j stores the address of i
    // * means value of AND & means address of 
    printf("The value of i is %d\n",i);      //23
    printf("the value of i is %u\n",*j);     //23
    printf("the address of i is %u\n",&i);   //address of i       //%u is to print the address 
    printf("the address of i is %u\n",j);    //address of i
    printf("The address of j is %u\n",&j);   
    printf("The value of j is %u\n",*(&j));         //value at address of j
    return 0;
}