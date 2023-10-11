// printing structures in single line
#include <stdio.h>
struct student
{int roll;
char name[100];
float gpa;
    /* data */
};
int main (){
    struct student s1={1000,"odregaard",4.0};
    printf("%d\n",s1.roll);
    printf("%s\n",s1.name);
    printf("%f\n",s1.gpa);

    return 0;
}

