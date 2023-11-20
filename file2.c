// printing integer from the file;

#include <stdio.h>
int main (){
    FILE*fptr;
    int a;

    fptr=fopen("1st.txt","r");
    fscanf(fptr,"%d",&a);
    printf("%d",a);


}