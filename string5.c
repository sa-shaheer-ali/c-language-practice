// printing the astring using pointers
#include <stdio.h>
void string(char arr[]);
int main (){
char *str="hello how are you";
puts(str);
str="i am fine thankyou";
puts(str);
string(str);

return 0;
}
void string (char arr[]){
for (int  i = 0; arr[i] !='\0'; i++)
{printf("%s",arr[i]);

    /* code */
}}

