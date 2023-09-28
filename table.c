#include <stdio.h>
void functiontable(int arr[][10],int n,int m,int number);
int main (){
int table[2][10];
functiontable(table,0,10,2);
functiontable(table,1,10,3);
for (int i = 0; i < 10; i++)
{printf("%d\t",table[0][i]);

    /* code */
}
printf("\n");
for (int i = 0; i < 10; i++)
{printf("%d\t",table[1][i]);

    /* code */
}

return 0;

}
void functiontable(int arr[][10],int n,int m,int number){
    for (int i = 0; i < m; i++)
    {arr[n][i]=number*(i+1);
        /* code */
    }
    
}
