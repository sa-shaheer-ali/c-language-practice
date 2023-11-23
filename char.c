#include  <stdio.h>
int main (){
    char *pc;
    int i=84;

    pc= (char *)&i;
    printf("%c",*pc);
  
    return 0;

}