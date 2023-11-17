#include <stdio.h>
int main (){
    int arr[]={1,2,4,5,6};
    int *ptr;
    ptr=&arr[0];
    ptr=ptr+3;

    printf("%d",*ptr);
    return 0;

}
