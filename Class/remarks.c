
#include <stdio.h>
void main(){
int m;
printf("enter the marks (out of 100):");
scanf("%d",&m);
if(m<=40){
     printf("You will not be promoted to the next class");
     }
else if(m>40&&m<=60){
    printf("You need to focus on your studies");
    }
else if(m>60&&m<=75){
    printf("Can do better"); 
    }
else if(m>75&&m<=85){
    printf("Good,but can do better");
    }
else if(m>85&&m<=90){
    printf("Excellent");
    }
else{
     printf("Very good keep it up");
     }
}
printf("enter a number")