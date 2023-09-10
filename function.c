#include<stdio.h>
int function(int num1,int num2);
int main (){
    int num1,num2;
    printf("enter number 1:)");
    scanf("%d",&num1);
    printf("enter number 2:");
    scanf("%d",&num2);
    int sum=function(num1, num2);
    printf("%d",sum);
return 0;

}
int function(int num1,int num2){
int sum=num1+num2;
return sum;}