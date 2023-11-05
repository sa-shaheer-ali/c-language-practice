// printing result of three different students using structures
#include <stdio.h>
#include <string.h>
struct student
{int roll;
float cgpa;
char name[100];
};
struct student2
{
  int roll;
float cgpa;
char name[100];
};
struct student3
{
   int roll;
float cgpa;
char name[100];
};
int main (){
    struct student s1;
    s1.roll=1664;
    s1.cgpa=9.2;
    // s1.name="shaheer"; qk hum directly copy nahi krskte;
    strcpy(s1.name,"gavi");
    printf("student name:%s\n",s1.name);
    printf("student roll no:%d\n",s1.roll);
    printf("student cspa:%f\n",s1.cgpa);
    printf("\n");
     struct student s2;
    s2.roll=1665;
    s2.cgpa=8.0;
     strcpy(s2.name,"frenkie");
    printf("student name:%s\n",s2.name);
    printf("student roll no:%d\n",s2.roll);
    printf("student cspa:%f\n",s2.cgpa);
     printf("\n");
    struct student s3;
    s3.roll=1666;
    s3.cgpa=7.9;
     strcpy(s3.name,"lewa");
    printf("student name:%s\n",s3.name);
    printf("student roll no:%d\n",s3.roll);
    printf("student cspa:%f\n",s3.cgpa);
    return 0; 
}
