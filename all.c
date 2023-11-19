#include <stdio.h>
struct all
{char name[30];
char team[20];
int number;


    /* data */
};
void info(struct all shush);

int main (){
    struct all shush;

printf("enter your name bruv:");
scanf("%s",shush.name);
printf("your team bruv:");
scanf("%s",shush.team);
printf("enter your number bruv:");
scanf("%d",&shush.number);

printf("your name :%s\n",shush.name);
printf("your team:%s\n",shush.team);
printf("your team number bruv:%d\n",shush.number);

return 0;




}