#include <stdio.h>
#include <stdlib.h>
int main (){
   int *ptr; 
    ptr=(int *)malloc(5*sizeof(int));

    printf("enter your number");
    for (int i = 0; i < 5; i++)
    {scanf("%d",&ptr[i]) ;}
   
    for (int i = 0; i < 5; i++)
    {printf("\n%d",ptr[i]);
        /* code */
    }
    
return 0;

    
}