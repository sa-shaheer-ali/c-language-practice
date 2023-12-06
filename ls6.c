#include <stdio.h>
    int linearserach(int arr[],int n,int key){
        for (int  i = 0; i < n; i++)
        {if (key==arr[i])
        {return i;

            /* code */
        }
        
            /* code */
        }
        return -1;

        
    };

int main (){
    int arr[]={12,23,34,45,56,67,89};

    int n=sizeof(arr)/sizeof(arr[0]);
    int key=56;
    int result=linearserach(arr,n,key);
    printf("%d",result);
    return 0;

}