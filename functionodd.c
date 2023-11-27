#include <stdio.h>
int array(int arr[],int num);
int main (){
    int num=10;
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    array(arr,10);
    for (int  i = 0; i < num; i++)
    {if (arr[i]%2!=0){
    printf("%d",arr[i]);
        /* code */
    }}
    
   
    return 0;
}
int array(int arr[],int num);

