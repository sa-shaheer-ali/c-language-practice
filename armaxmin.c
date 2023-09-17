#include <stdio.h>
int main (){
    int album[]={23,45,4,80,54};
    int photo=album[0];
    for (size_t i = 1; i < sizeof(album)/sizeof(album[0]); i++)
    {if (album[i]>photo)
    {photo=album[i];
        /* code */
    }
     
        /* code */
    }
     printf("%d biggest number:}\n",photo);
     for (size_t i = 1; i < sizeof(album)/sizeof(album[0]); i++)
    {if (album[i]<photo)
    {photo=album[i];
        /* code */
    }
    
        /* code */
    }
    
     
   
    printf("%d smallest number:(",photo);
    return 0;
}