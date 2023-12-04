#include <stdio.h>  
int main (){
    int yos,quali,salary=0;
    char gender;


    printf("enter your gender,yos,quali post=0and graduate 1");
    scanf("%c%d%d",&gender,&yos,&quali);
    if (gender=='m'&& yos>=10 && quali==1)
    
    {salary=15000;

        /* code */
    }

    else if (gender=='m'&& yos>=10 &&quali==0)
    {salary=10000;

        /* code */
    }
    printf("%d\n",salary);
    return 0;

    


}