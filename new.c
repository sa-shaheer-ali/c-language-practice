  #include <stdio.h>
void function(char arr[]);
int main (){
char firstcharater[]="bulo na mujhe pyar he aaaaaaaaaaa";
char lastcharacter[]="maine tujh ko  dekha dil tere oar pekha";
function(firstcharater);
function(lastcharacter);
return 0;
}
void function(char arr[]){
    for (int i = 0; arr[i]!='\0'; i++)
    {printf("%c",arr[i]);
        /* code */
    }
    
}