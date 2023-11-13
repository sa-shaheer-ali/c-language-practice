// simple code using struct and function to print the person information
#include <stdio.h>
struct person
{char name[30];
int age;
char nationality[30];
};
void info(struct person n){
printf("name:%s\n",n.name);
printf("%d\n",n.age);
printf("%s\n",n.nationality);


}

int main  (){
struct person p1;
printf("enter name :");
scanf("%s",p1.name);
printf("enter age:");
scanf("%d",&p1.age);
printf("enter nationality:");
scanf("%s",p1.nationality);
printf("your info:\n");
info(p1);
return 0;

}