// tthis code is correct using fucntion in structures
#include<stdio.h>
#include<string.h>
struct student
{int rollno;
float cgpa;
char name[100];

  
};
void printinfo(struct student s1);
int main (){
     struct student s1={1010,3.0,"raphina"};
     printinfo(s1);



     return 0;


}   
void printinfo(struct student s1){
printf("%d",s1.rollno);
printf("%f",s1.cgpa);
printf("%s",s1.name);

}
