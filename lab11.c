#include <stdio.h>
void swap(int *a,int *b){
     int temp=*a;
     *a=*b;
     *b=temp;

}
int main (){
   int x=45;
   int y=67;
   printf("before swap");
   printf("a=%d and b=%d", x, y);
   printf("\nafter  swap");
   swap(&x,&y);
   printf("\na=%d and b=%d",x,y);
   return 0;

}