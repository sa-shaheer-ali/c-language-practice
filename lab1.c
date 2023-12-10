#include <stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    ptr=(int *) malloc(6*sizeof(int));
    
    printf("enter your numbers:");
    for (int i = 0; i <6; i++)
    {
       scanf("%d",&ptr[i]);
       
    }
    printf("numbers in reverse\n");
    
    for (int i = 5; i >=0; i--)
    {printf(" \n%d",ptr[i]);

        /* code */
    }
    free(ptr);
    
    
    return 0;

}