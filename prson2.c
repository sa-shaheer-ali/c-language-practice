#include <stdio.h>
struct person
{char name[30];
int age;
char nationality[30];
};
void info(struct person n){
printf("name:%s\n",n.name);



}

int main  (){
struct person p1;
printf("enter name :");
scanf("%s",p1.name);

info(p1);
return 0;

}