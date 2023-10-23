#include <stdio.h>
int main (){
    FILE *fptr;
    fptr =fopen("file55.txt","w");
    char arr[50];
    int age;
    float numbers;
    printf("your name:",arr);
    scanf("%s",&arr);
    printf("your numbers:");
    scanf("%f",&numbers);
    printf("your age:");
    scanf("%d",&age);
    fprintf(fptr,"%s\t",arr);
    fprintf(fptr,"%f\t",numbers);
    fprintf(fptr,"%d\t",age);
    
    return 0;







    fclose(fptr);

}