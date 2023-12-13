#include <stdio.h>
#include<stdlib.h>
int factorial(int n);

int main(){
  
    int n;
    printf("enter your number:");
    scanf("%d",&n);
    int *ptr;
    ptr=(int *) malloc(n*sizeof(int));
    printf("factorail is %d",factorial(n));

    
    return 0;

}
int factorial(int n){
    if (n==0 || n==1)
    {return 1;

        /* code */
    }
    int fact=factorial(n-1);
    int result=fact*n;
    return result;


    
}