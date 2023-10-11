// array with structures
#include <stdio.h>
#include <string.h>
struct student
{int roll;
float cgpa;
char name[100];
    /* data */
};


int main (){
    struct student cs[100];
    cs[0].roll=1664;
    cs[0].cgpa=3.6;
    strcpy(cs[0].name,"lewa");
    printf("roll no:%d \n",cs[0].roll);
    printf("cgpa:%f \n",cs[0].cgpa);
    printf("name:%s \n",cs[0].name);
    return 0;

    
}
