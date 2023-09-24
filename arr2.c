
#include <stdio.h>
int array(int arr[],int num);
int main (){
int number;
printf("enter your number please:");
scanf("%d",&number);
int arr[]={1,2,3,4,5,6,7,8};
int found =0;
for (int i = 0; i < 8; i++)
{if (number==arr[i]){
found =1;
break;

}}
if (found)
{ printf("your number has been found:%d",number);
    /* code */
}

else{printf("number not found");}
return 0;

}

