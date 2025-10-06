#include <stdio.h>

void string(char arr[]);
int main (){
    char str[100];
    fgets(str ,100,stdin);
    puts(str);
    return 0l;

}
void string(char arr[]){
    for (int i = 0; arr[i] < '\0'; i++)
    {printf("%c",arr[i]);
        /* code */
    }
    printf("\n");;
}
// printing multiply character in the string



