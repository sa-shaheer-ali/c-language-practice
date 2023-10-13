// using typedef in the structures 
#include <stdio.h>
#include <string.h>
typedef struct computersciencestudent
{int rollno;
float numbers;
char name[100];
    /* data */
}css;

int main (){

    css s1;
    s1.rollno=123;
    s1.numbers=2.34;
    strcpy(s1.name,"ronaldo");
    printf("%s\n",s1.name);
    printf("%d\n",s1.rollno);
    printf("%f\n",s1.numbers);
    
return 0;
    
}