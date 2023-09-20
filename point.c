
# include<stdio.h>
int main (){
    int number;
    printf("enter number please:");
    scanf("%d",&number);
    if (number>10||number<=0)
    {printf("its very big number boi");
    return 1;

   
    }
    int arr[10];
    
    printf("enter number:\n");
    for (int i = 0; i < number; i++)
    {scanf("%d",&arr[i]);
    }
    int check=arr[0];
    for (int i = 1; i < number; i++)
    {if (arr[i]>check )
    {check=arr[i];
        /* code */
    }}
    printf("highest number:%d",check);
    return 0;
    
}