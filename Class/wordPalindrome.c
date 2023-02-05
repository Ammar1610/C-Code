#include <stdio.h>
#include<string.h>
int main(){
     char s[10];
     int flag=0;
     printf("enter a word:");
     scanf("%s",&s);
     int length=strlen(s);
     for(int i=0;i<length;i++){
         if(s[i]!=s[length-1-i]){
             flag=1;
             break;
         }
     }
     if(flag){
             printf(" %s is not a palindrome",s);
          }
     else{
        printf(" %s is a palindrome",s);
     }     
     return 0;
}

// #include <stdio.h>
// #include<string.h>
// int main(){
//     char a[10],b[10];
//     printf("Enter a word:");
//     gets(a);
//     int length=strlen(a);
//     for(int i=length-1;i>=0;i--){
//         for(int j=0;j<length;j++){
//             b[j]=a[i];
//         }
//     }
//     for(int i=0;i<length-1;i++){
//     if(b[i]==a[i]){
//         printf("Palindrome");
//         break;
//     }    
//     }
//     printf("Not palindrome");

//     return 0;
// }