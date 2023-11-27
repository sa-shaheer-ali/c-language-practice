#include <stdio.h>
int linear(int arr[],int num,int key){
    for (int  i = 0; i < num; i++)
    {if (arr[i]==key)
    {return i;

        /* code */
    }
    
        /* code */
    }
    return -1;

    
}
int main (){
    int arr[]={12,34,45,56,78,89,90};
    int range=sizeof(arr)/sizeof(arr[0]);
    int target=9;
    int result=linear(arr,range,target);
    if (result!=-1)
    { printf("%d your number found bbrruvv at %d",target,result);
        /* code */
    }
    else
(printf("what the hell bruv cdnt find your number bruvvvv"));
    return 0;


    



}