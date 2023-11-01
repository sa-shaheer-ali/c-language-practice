#include <stdio.h>
int main (){
    int arr[]={34,65,67,98,67,9,22};
    int check=arr[0];
    for (int i = 1; i < sizeof(arr)/sizeof(arr[0]); i++)
    {if (arr[i]>check)
    {check=arr[i];

        /* code */
    }
   
        /* code */
    } printf("%d",check);
return 0;


}