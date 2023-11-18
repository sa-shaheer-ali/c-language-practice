// linear search

#include <stdio.h>
#include <string.h>
int main (){
    char arr[][20]={"messi","ronaldo","lewandowski","neymar","shaheer"};
    char check[]={"shaheer"};
    int found=0;
   
    for (int i = 0; i<sizeof(arr)/sizeof(arr[0]) ; i++)
    {if (strcmp( arr[i],check  )==0)
    {found =1;
       printf("%s at number %d",check,i);
       break;
    }
    }
    if (!found){printf("not found");}
    
   return 0;

    
}