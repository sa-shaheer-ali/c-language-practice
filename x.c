#include <stdio.h>
void function(char arr[],int num);
int main (){
char arr[]={'x','y','z'};
function(arr,3);
int count=0;

for (int i = 0; i <3; i++)
{if (arr[i]=='x')
{count++;

  /* code */
} printf("%c",arr[i]) ;
printf("\n");
}printf("%d",count);
return 0;

}
void function(char arr[],int num){

}