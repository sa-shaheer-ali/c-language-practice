#include <stdio.h>
char string(char array[]);
int main (){
char arr[50];
printf("enter your character:");
scanf("%s",arr);
string(arr);
printf("%s thats your character ",arr);
return 0;


}
char string (char array[]){
    for (int i = 0; array[i]; i++)
    {
        /* code */
    }
    
}