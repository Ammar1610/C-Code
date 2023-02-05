#include <stdio.h>
void main(){
int l,i,t,ptr;
printf("Enter the length:");
scanf("%d",&l);
int a[l];
for (i = 0; i < l; i++){
        printf("Enter the number:");
        scanf("%d", &a[i]);}
    for(i=1;i<l;i++){
        t=a[i];
        ptr=i-1;
        while(ptr>=0 && t<a[ptr]){
            a[ptr+1]=a[ptr];
            ptr=ptr-1;}
        a[ptr+1]=t;}
    for (i = 0; i < l; i++){
        printf(" %d ", a[i]);
    }
}
