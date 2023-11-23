
#include <stdio.h>
#include<string.h>
struct node
{int value;
struct node *next;

    /* data */
}; 

void print( struct node *head){
    struct node *temporary=head;
    while(temporary!=NULL){
    printf("%d",temporary->value);
    temporary=temporary->next;}
    printf("\n");


}
int main (){
    struct node s1,s2,s3;
     struct node *head;

    s1.value=23;
    s2.value=43;
    s3.value=10;
    
   head = &s3;
    s3.next = &s2;
    s2.next = &s1;
    s1.next = NULL;

    print(head);


  
return 0;
}