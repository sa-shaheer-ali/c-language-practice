// usnig string library and using its fucntion 
#include <stdio.h>
#include <string.h>
int main (){
    char str[]={"oppenhiemer"};
    char str2[]={"boxoffice"};
    printf("%d\n",strlen(str));
    printf("%s\n",strcpy(str2,"shutup"));
    printf("%s\n",strcat(str,str2));

    printf("%d\n",strcmp(str,str2));
    printf("%s\n",strrev(str));
    return 0;





}