#include <stdio.h>

int main (){
int arr[1][2];
printf("enter number:");
scanf("%d",&arr[0][0]);
printf("enter number:");
scanf("%d",&arr[0][1]);
int sum=0;
sum=arr[0][0]+arr[0][1];
printf("%d your sum of arrays:",sum);


return 0;
}