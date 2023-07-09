#include <stdio.h>
void number(int a, int b);
void _number(int *a, int *b);

int main(){
    int a= 5;
    int b =10;
number(a,b);
_number(&a,&b);

return 0;
}
void number(int a ,int b){
int c;
c=a;
a=b;
b=c;
printf("a=%d & b=%d",a,b);
}
void _number(int *a, int *b){
int c=*a;
*a=*b;
*b=c;
printf("a=%d & b=%d",*a,*b);}
