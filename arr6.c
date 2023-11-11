// simple code of array 2
#include <stdio.h>
int main (){
    int array[]={32,545,67,9,85,6,34,7,698,34};
    int b=3;
    int *p;
    p=&array[0];
    printf("%d",p[b+1]);
    return 0;

}