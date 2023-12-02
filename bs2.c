// just a simple code of binary search
#include <stdio.h>
int binarysearch(int arr[],int firstnum,int lastnum,int target){
    while(firstnum<=lastnum)
    {int mid=(firstnum+lastnum)/2;
    if (arr[mid]==target)
    {return mid;

        /* code */
    }
    if (arr[mid]<target)
    {firstnum=mid+1;
        /* code */
    }else
    (lastnum=mid-1);
    


    
    }
    return -1;

}
int main (){
    int arr[]={1,2,3,4,5,6,7,8};
    int firstnum=0;
    int lastnum=8;
    int target=4;
    int result=binarysearch(arr,firstnum,lastnum,target);
    if (result !=-1)
    {printf("number is %d and is at %d",target,result)
;        /* code */
    }
    else(printf("%d not found",target));
    return 0;

    


}
