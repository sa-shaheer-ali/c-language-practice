#include <stdio.h>
int binraysearch(int arr[],int firstindex,int lastindex,int target){
    while (firstindex<=lastindex)
    {int mid=(firstindex+lastindex)/2;
    if (arr[mid]==target)
    {return mid ;

        /* code */
    }
  if (arr[mid]<target)
  {firstindex=mid+1;

    /* code */
  }
  
    else(lastindex=mid-1);
        /* code 
        */
    }
    return 0;

    
}
int main (){
    int arr[]={1,23,34,45,56,67,78,89,90};
    int target=78;
    int firstindex=1;
    int lastindex=8;
    int result=binraysearch(arr,firstindex,lastindex,target);
     if (result !=-1)
    {printf("number is %d and is at %d",target,result)
;        /* code */
    }
    else(printf("%d not found",target));
    return 0;

}