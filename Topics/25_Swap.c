  #include <stdio.h>
  void wrongswap(int a,int b);
  void swap(int *a,int *b);
  int main(){
      int x = 3,y = 4;
    //   printf("The value of x and y before swap is %d and %d\n",x,y);
    //   wrongswap(x,y);   //this will not work due to call by value
    //   printf("The value of x and y after swap is %d and %d\n",x,y);


      printf("The value of x and y before swap is %d and %d\n",x,y);
      swap(&x,&y);   //this  not work due to call by reference
      printf("The value of x and y after swap is %d and %d\n",x,y);
      return 0;
  }
  void wrongswap(int a,int b){
     int temp;
     a = temp;
     a=b;
     b=temp;
     return;
  }
  void swap(int *a,int *b){
      int temp;
      temp = *a;      //or temp = 3{since,*a=&x} means temp = value stored at the address of x = 3
      *a = *b; 
      *b = temp;
      return;
  }