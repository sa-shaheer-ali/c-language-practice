#include<stdio.h>
void binary(int num);
int main (){
    int number;
    printf("enter your number:");
    scanf("%d",&number);
    printf("binary representation:");
    binary(number);
    return 0;

}
void binary(int num){
if (num>0)
{binary(num/2);
printf("%d",num%2);

    /* code */
}

}