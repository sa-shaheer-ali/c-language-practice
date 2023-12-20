#include<stdio.h>
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;

}
int partition (int arr[],int low,int high){
int pivot=arr[low];
int i=low;
int j=high;
while (i<j)
{
while (arr[i]<=pivot && i<=high){
   i++;

}
   while (arr[j]>pivot)
   {j--;

    /* code */
   }
   if (i<j)
   {swap(&arr[i],&arr[j]);

    /* code */
   }
   
   
}
swap(&arr[low],&arr[j]);
return j ;


}
void quicksort (int arr[],int low,int high){
    if (low<high)
    {
    int pi= partition (arr,low,high);
    quicksort(arr,low,pi-1);
    quicksort(arr,pi+1,high);

        /* code */
    }
    

}
void printarray(int arr[],int size){
    for (int  i = 0; i < size; i++)
    {printf("%d\n",arr[i]);

        /* code */
    }
    printf("\n");

    
}
 int main (){
    int arr[]={12,43,23,564,45,87};
    int size=sizeof(arr)/sizeof(arr[0]);
    printarray(arr,size);
    quicksort(arr,0,size-1);
    printf("sorted array:\n");
    printarray(arr,size);
    return 0;



 }