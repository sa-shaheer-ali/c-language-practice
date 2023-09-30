#include <stdio.h>

int  main (){
    int num;
    printf("enter your number >2:");
scanf("%d",&num);
int fib[num];
fib[0]=0;
fib[1]=1;
for (int i = 2; i < num; i++)
{fib[i]=fib[i-1]+fib[i-2];
printf("%d\t",fib[i]);
    /* code */
}
printf("\n");
return 0;

}

// this shit is right dont know y this shit is not working here