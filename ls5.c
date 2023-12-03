#include <stdio.h>
int linearserch(int arr[],int n,int key){
    for (int  i = 0; i <n; i++)
    {if (arr[i]==key)
    {return i;

        /* code */
    }
    
        /* code */
    }
    return -1;

};
int main (){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key= 4;
    int result=linearserch(arr,n,key);
    if (result!=-1)
    {printf("%d your number is at %d",key,result);

        /* code */
    }
else(printf("cant find if there  is your number"));
return 0;


    
}