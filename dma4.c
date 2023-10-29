// using calloc in this and then using free and then again using callic
#include <stdio.h>
#include <stdlib.h>
int main (){
    int *ptr;
    ptr= (int *)calloc(5,sizeof(int));
    ptr[0]=1;
     ptr[1]=1;
      ptr[2]=1;
       ptr[3]=1;
        ptr[4]=1;
        for (int i = 0; i < 5; i++)
        {printf("%d",ptr[i]);

            /* code */
        }
        free(ptr);
        ptr=(int*)calloc(2,sizeof(int));
        for (int i = 0; i < 2; i++)
        { printf("%d",ptr[i]);
           
        }
        
       

        



    return 0;

}