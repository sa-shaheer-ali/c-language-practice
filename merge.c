#include <stdio.h>
void merge(int a[],int b[],int c[],int m,int n){
    int i,j,k;
    i=j=k=0;
    while (i<m && j<n)
    {if (a[i]<b[j])
    {
     c[k]=a[i];
        i++;k++;
    }
    else{c[k]=b[j];
    j++;k++;
    }
    }
    while (i<m)
    {c[k]=a[i];
    i++,j++;
    }
    while (j<n)
    {c[k]=b[j];
    j++;k++;
    } 
}
int main (){
    int arr[]={1,3,5,7,9,11};
    int arr2[]={2,4,6,8,10};
    int arr3[30];
    int m=sizeof(arr)/sizeof(arr[0]);
    int n=sizeof(arr2)/sizeof(arr[0]);
    merge(arr,arr2,arr3,m,n);
    printf("merge array:\n");
    for (int  i = 0; i < m+n; i++)
    {printf("%d",arr3[i]);

        /* code */
    }
    return 0;
}