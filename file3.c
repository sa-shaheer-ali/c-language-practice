// printing characters aka string in other file which is known as testfile.txt
#include <stdio.h>
int main (){
    FILE  *file;
    char a[30];

    file=fopen("testfile.txt","w");
    fprintf(file,"how are you my son, its aurthor morgan",a);
    fclose(file);

    return 0;

}