
void stringarr(char arr[]);
int main(){
    char first[]="ferrari";
    char last[]="lamborghini";
    stringarr(first);
    stringarr(last);

    return 0;

}
void stringarr(char arr[]){
for (int i = 0;arr[i] !='\0'; i++)
{printf("%c", arr[i]);
    /* code */
}printf ("\n");

}