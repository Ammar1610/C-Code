#include <stdio.h>
struct tstruct{
    int hr;
    int min;
    int sec;
};
int main(){
    struct tstruct a;
    printf("Enter hour in 24 hour system:");
    scanf("%d",&a.hr);
    printf("Enter minutes:");
    scanf("%d",&a.min);
    printf("Enter seconds:");
    scanf("%d",&a.sec); 
    printf("%d:%d:%d",a.hr,a.min,a.sec); 
    return 0;
}