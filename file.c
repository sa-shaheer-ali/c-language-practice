// printing file with the help of fgetc
#include <stdio.h>
int main (){
    FILE *fptr;
    fptr=fopen("file.txt","r");
    printf("%c",fgetc(fptr));
    fclose(fptr);
    return 0;

}