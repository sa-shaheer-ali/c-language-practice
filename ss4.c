#include <stdio.h>
int swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;

}
int selectionsort(int arr[],int n){
    for (int i = 0; i < n-1; i++)
    {int min=i;
    for (int j = i+1; j< n; j++)
    {if (arr[j]<arr[min])
    {min=j; }}
    if (min!=i)
    {swap(&arr[i],&arr[min]);

        /* code */
    }}
    
    
};
int main (){
    int arr[]={29,23,43,34,54,56,87};
    int n=sizeof(arr)/sizeof(arr[0]);
     selectionsort(arr,n);
    for (int  i = 0; i < n; i++)
    {printf("%d\n",arr[i]);

        /* code */
    }
    return 0;


}