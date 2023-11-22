// using pointers in struct to print its value
#include <stdio.h>
struct chain {
    int steal;

};
int main (){
struct chain c1;
c1.steal =123;
struct chain *pointer;
pointer=&c1;
printf("%d",(*pointer).steal);
return 0;


}