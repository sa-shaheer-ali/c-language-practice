#include <stdio.h>
#include <stdlib.h>
int main (){
    int *ptr;
    ptr=(int*)calloc(5,sizeof(int));
    printf("enter your number please:");
    for (int i = 0; i < 5; i++)
    {scanf("%d",&ptr[i]);

        
    }
    for (int i = 0; i < 5; i++)
    {printf("%d",ptr[i]);

        /* code */
    }
    return 0;

    
}
