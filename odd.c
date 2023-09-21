# include <stdio.h>
int main (){
    int number,i=1,sum=0;
    printf("enter number please:");
    scanf("%d", & number);
    while (i<=number)
    { 
     sum += i;
        i += 2;
        /* code */
    }
    printf("The sum of all odd numbers between 1 and %d is %d\n", number, sum);
    return 0;
}


