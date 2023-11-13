#include <stdio.h>
int main (){

    int arr[]={1,2,3,4,5};
    int *ptr=&arr[1];

    printf("%d",*ptr+3);
return 0;

}