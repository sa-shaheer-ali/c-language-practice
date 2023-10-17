// using pointers in the structure
#include <stdio.h>
struct student
{int roll;
char name[100];
float gpa;
    /* data */
};
int main (){
    struct student s1={1000,"odregaard",4.0};
    printf("%s\n",s1.name);
    printf("%f\n",s1.gpa);

    struct student *ptr=&s1;
    printf("%d",ptr->roll);



    return 0;
}