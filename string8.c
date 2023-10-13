// using strlen to print
#include <stdio.h>
#include <string.h>

int length(char arr[]);
int main (){
char name[100];
fgets(name,100,stdin);
length(name);

return 0;}
int length(char arr[]){

    for (int i = 0; arr[i]!='\0' ; i++)
    { 

        /* code */
    }
    printf("%d",strlen(arr));
    }
    
   


