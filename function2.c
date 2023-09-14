#include <stdio.h>
int function(int number);
int main (){
    int number;
    printf("enter number either positive or negetive:");
    scanf("%d",&number);
    function(number);
    return 0;


}
int function(int number){if (number%2==0)
{printf("even");
    /* code */
}
    else{printf("odd");}
}



