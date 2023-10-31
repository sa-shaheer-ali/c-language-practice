#include <stdio.h>
int main (){
    int arr[]={1,2,3,4,5,6};
    int *ptr;
    ptr=&arr[0];
     printf("%u\n",&arr[0]);

    *ptr=*ptr+3;
    printf("%d",ptr);
    return 0;


}
