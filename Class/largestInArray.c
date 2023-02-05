 #include <stdio.h>
 int main(){
     int a[100],n;
     printf("Enter number of elements(1-100):");
     scanf("%d",&n);
     for(int i=0;i<n;i++){
         printf("Enter a element %d:",i+1);
         scanf("%d",&a[i]);
    }
      for(int i=0;i<n;i++){
          if(a[i]>a[0]){
              a[0] = a[i];
          }
      }
     printf("Highest number = %d",a[0]);

      return 0;
  }