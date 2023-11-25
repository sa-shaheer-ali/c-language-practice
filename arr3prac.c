#include <stdio.h>
int main (){
    int arr[]={34,65,78,54,49};
    int check=arr[0];
    for (size_t i = 1; i <sizeof(arr)/sizeof(arr[0]); i++)
    {if (arr[i]<check)
    {check=arr[i];
        
    }
    }
    printf("%d its ur number boi hahah:)",check);
    return 0;
}
