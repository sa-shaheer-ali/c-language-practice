#include <stdio.h>
int linearsearch(int arr[],int n,int key){
    for (int i = 0; i < n; i++)
    {if (arr[i]==key)
    {return i;

        /* code */
    }
    
        /* code */
    }
    return -1;

}
int main (){
    int arr[]={1,24,45,67,89,90,98};
    int b=sizeof(arr)/sizeof(arr[0]);
    int target= 89;
    int result=linearsearch(arr,b,target);
    if (result!=-1)
    {printf("%d number is at %d",target,result);

        /* code */
    }
    else(printf("errorrr"));
    return 0;

    
}