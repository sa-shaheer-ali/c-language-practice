// doing fun with arrays
#include <stdio.h>
int main (){
    int array[]={12,43,54,2,347,78,56,23};
    int *p=&array[3];
    int x=7;
    printf("%d",p[x+7/7]);
    return 0;

}