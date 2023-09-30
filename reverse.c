#include <stdio.h>
int function(int arr[],int num);
int print(int arr[],int num);
int main (){
    int arr[]={1,2,3,4,5};
    function(arr,5);
    print(arr,5);
    return 0;
}
int print(int arr[],int num){
    for (int i = 0; i < num; i++)
    {printf("%d\t",arr[i]);

        /* code */
    }
    
}
int function(int arr[],int num){
for (int i = 0; i< num/2; i++)
{int firstnum=arr[i];
int lastnum=arr[num-i-1];
arr[i]=lastnum;
arr[num-i-1]=firstnum;

    /* code */
}

}