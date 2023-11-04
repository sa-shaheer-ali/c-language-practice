#include <stdio.h>
#include <string.h>
typedef struct address
{int houseno;
char city[100];
char country[100];
};
int main (){
struct address arr[5];
arr[0].houseno;
arr[0].city;
arr[0].country;
arr[1].houseno;
arr[1].city;
arr[1].country;
arr[2].houseno;
arr[2].city;
arr[2].country;
arr[3].houseno;
arr[3].city;
arr[3].country;
arr[4].houseno;
arr[4].city;
arr[4].country;

 

printf("Enter your house no:");
scanf("%d\n",&arr[0].houseno);
printf("your house no:%d\n",arr[0].houseno);
printf("Enter your city:");
scanf("%s",&arr[0].city);
printf("your city:%s\n",arr[0].city);
printf("Enter your country:");
scanf("%s",&arr[0].country);
printf("your country:%s\n",arr[0].country);

printf("\n");

printf("Enter your house no:");
scanf("%d",&arr[1].houseno);
printf("your house no:%d\n",arr[1].houseno);
printf("Enter your city:");
scanf("%s",&arr[1].city);
printf("your city:%s\n",arr[1].city);
printf("Enter your country:");
scanf("%s",&arr[1].country);
printf("your country:%s\n",arr[1].country);

printf("\n");

printf("Enter your house no:");
scanf("%d",&arr[2].houseno);
printf("your house no:%d\n",arr[2].houseno);
printf("Enter your city:");
scanf("%s",&arr[2].city);
printf("your city:%s\n",arr[2].city);
printf("Enter your country :");
scanf("%s",&arr[2].country);
printf("your country:%s\n",arr[2].country);

printf("\n");

printf("Enter your house no:");
scanf("%d",&arr[3].houseno);
printf("your house no:%d\n",arr[3].houseno);
printf("Enter your city:");
scanf("%s",&arr[3].city);
printf("your city:%s\n",arr[3].city);
printf("Enter your country no:");
scanf("%s",&arr[3].country);
printf("your country:%s\n",arr[3].country);

printf("\n");

printf("Enter your house no:");
scanf("%d",&arr[4].houseno);
printf("your house no:%d\n",arr[4].houseno);
printf("Enter your city:");
scanf("%s",&arr[4].city);
printf("your city:%s\n",arr[4].city);
printf("Enter your country:");
scanf("%s",&arr[4].country);
printf("your country:%s\n",arr[4].country);
printf("\n");


return 0;


}

