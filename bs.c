// binary search
#include <stdio.h>
int binary(int arr[],int startindex,int lastindex,int target){
while (startindex<=lastindex)
{int mid= startindex+lastindex/2;
if (arr[mid]==target)
return mid;
    /* code */
if (arr[mid]<target)
startindex=mid+1;
else
lastindex=mid-1;
}
return -1;}
int main (){
    int arr[10]={0,1,2,3,4,5,6,7,8,9};
    int firstindex=0;
    int lastindex=8;
    int target=8;
     int result = binary(arr, firstindex, lastindex, target);

    if (result != -1) {
        printf("Target %d found at index %d\n", target, result);
    } else {
        printf("Target %d not found in the array\n", target);
    }

    return 0;
    
}
