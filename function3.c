#include <stdio.h>
int function(int number1,int number2);
int main (){
    int number1,number2;
    printf("enter number either positive or negetive:");
    scanf("%d",&number1);
     printf("enter number either positive or negetive:");
    scanf("%d",&number2);
    function(  number1, number2);
    return 0;


}
int function(int number1,int  number2){if (number1>number2)
{printf("%d",number1);
    /* code */
}
    else{printf("%d",number2);}



}

