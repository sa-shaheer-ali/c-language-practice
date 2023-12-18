// ramish gross salary 
#include <stdio.h>
int main (){
    int basicsalary,dearnessallowance,houserent,grosssalary;
    printf("enter salary");
    scanf("%d",&basicsalary);
    dearnessallowance= .4*basicsalary;
    houserent=.2*basicsalary;
    grosssalary=basicsalary+houserent+dearnessallowance;
    printf("%d\n",basicsalary);
       printf("%d\n",dearnessallowance);
          printf("%d\n",houserent);
             printf("%d\n",grosssalary);
             return 0;



}
