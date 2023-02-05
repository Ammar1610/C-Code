#include <stdio.h>
#include<string.h>
struct triangle{
    int length;
    int height;
    char name[3];
};
int main(){
    struct triangle t;
    t.length = 5;
    t.height = 10;
    t.name='sam';
    //t.name='sam';
    printf("%d \n",t.name);  
    /*struct triangle *p = &t;
    printf("%d %d",*p); */   
    return 0;
}