//  this code is easy right
// just printing array with some other variable also in it :)
#include <stdio.h>
int main (){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int x =6;
    int *d;
    d=&arr[2];
    printf ("%d",d[x*4 / 4]);
    return 0;
    

}