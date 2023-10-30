// using realloc to use the same pointer to make space for more dynamic memory
#include <stdio.h>
#include <stdlib.h>
int main (){
    int *number;
     number=(int *)calloc(5,sizeof(int));

    printf("enter your number:");
    for (int i = 0; i < 5; i++)
    { scanf("%d\n",&number[i]);
        
    }
    for (int i = 0; i < 5; i++)
   {printf("%d\n",number[i]);
   
    /* code */
   }
   printf("\n");
   
    realloc(number,8);
    printf("enter your number:");
    for (int i = 0; i <8; i++)
    { scanf("%d",&number[i]);
        /* code */
    }
    for (int i = 0; i < 8; i++)
   {printf("%d\n",number[i]);
   
    /* code */
   }
    
    return 0;

}