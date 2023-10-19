// writing file with the help of fputc
#include <stdio.h>
int main (){
    FILE *fptr;
    fptr=fopen("file.txt","w");
    fputc('h',fptr);
    fputc('e',fptr);
    fputc('l',fptr);
    fputc('l',fptr);
    fputc('o',fptr);
    
    fclose(fptr);
    return 0;

}