#include <stdio.h>
void capital(char *str){
    if (*str=='\0')
    {printf("there is no capital letter");
    return ;


        /* code */
    }
    if (*str>='A' && *str<='Z')
    {printf(" capital letter found :%c\n",*str);
    return ;


        /* code */
    }
    capital(str+1);

    
}
int main (){
    char arr[]="How are you doing   !!";
    capital(arr);
    return 0;


}