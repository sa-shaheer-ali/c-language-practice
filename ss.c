// selection sort 
#include <stdio.h>
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int selectionsort(int arr[],int n){
for (int i = 0; i < n-1; i++)
{int min=i;
for (int j = i+1; j < n; j++)
{if (arr[j]<arr[min])
{min=j;}
}
if (min!=i)
{
   swap(&arr[i],&arr[min]);

}
}

};
int main (){
    int arr[]={2,4,3,6,1,7};
    int n=sizeof(arr)/sizeof(arr[0]);

   selectionsort(arr,n);
  for (int  i = 0; i < n; i++)
  {printf("%d",arr[i]);

    /* code */
  }
  
    return 0;

}
