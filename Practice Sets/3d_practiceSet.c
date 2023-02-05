//lower case or not

#include <stdio.h>
int main(){
    // lowercase --> 97-122 
    char ch;
    printf("Enter a Character:");
    scanf("%c",&ch);
    if(ch>=97 && ch<=122){
        printf("Character is Lowercase");
    } 
    else{
        printf("Character is not Lowercase");
    } 
    return 0;
}