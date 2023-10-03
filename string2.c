

void string(char array[]);
int main (){
char array1[]="barcelona";
char array2[]={'b','a','r','c','e','l','o','n','a','\0'};
string (array1);
string (array2);
return 0;}
void string(char array[]){
    for (int i = 0; array[i]!='\0' ; i++)
    {printf("%c",array[i]);

        /* code */
    }
    
}