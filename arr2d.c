#include <stdio.h>
int main (){
    int arr[2][3];
    arr[0][1]=90;
    arr[0][2]=60;
    arr[0][3]=70;
    arr[1][1]=56;
    arr[2][2]=87;
    arr[3][3]=80;
    printf("%d\n",arr[0][1]);
    printf("%d\n",arr[0][2]);
    printf("%d\n",arr[0][3]);
    return 0;
}