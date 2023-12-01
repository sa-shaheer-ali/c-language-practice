#include <stdio.h>
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;

}
void linearsearch(int arr[],int n){
    for (int i = 0; i < n-1; i++)
        {int min=i;
          for (int j = i+1; j < n;j++){
          if (arr[j]<arr[min])

          {min=j;}}
          if (min!=i)
          {swap(&arr[i],&arr[min]);
            /* code */
          }
 
    }};
    int main (){
        int arr[]={23,34,12,11,54,45,67,39};
        int n=sizeof(arr)/sizeof(arr[0]);
        linearsearch(arr,n);
        for (int i = 0; i < n; i++)
        {printf("%d\n",arr[i]);

            /* code */
        }
        return 0;

    }
    
    

