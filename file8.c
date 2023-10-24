// printing string int the file
#include <stdio.h>
int main (){
    FILE *fptr;
    fptr=fopen("file88.txt","r");
char arr[100];

   fscanf(fptr,"%s",&arr);
   printf("%s",arr);
  

   
    fclose (fptr);
    return 0;



}