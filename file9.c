// printing info of 4 students in file :) 
#include <stdio.h>
int main (){
    FILE *fptr;
    fptr=fopen ("file9.txt","w");
     char name[100];
     int marks;
     float cgpa;
     char course[100];
     marks=342;
     cgpa=3.53;
     fprintf(fptr,"%s\n","basheer");
     fprintf(fptr,"%d\n",marks);
     fprintf(fptr,"%f\n",cgpa);
     fprintf(fptr,"%s\n","calulus");
     
    
     marks=342;
     cgpa=3.53;
     

     fprintf(fptr,"%s\n","alexia");
     fprintf(fptr,"%d\n",marks);
     fprintf(fptr,"%f\n",cgpa);
     fprintf(fptr,"%s\n","ics");
     
     
    
     marks=342;
     cgpa=3.53;
     
     fprintf(fptr,"%s\n","eillish");
     fprintf(fptr,"%d\n",marks);
     fprintf(fptr,"%f\n",cgpa);
     fprintf(fptr,"%s\n","english");
     
     
     
     marks=342;
     cgpa=3.53;

     fprintf(fptr,"%s\n","jasen");
     fprintf(fptr,"%d\n",marks);
     fprintf(fptr,"%f\n",cgpa);
     fprintf(fptr,"%s\n","physics");
     





    fclose(fptr);
return 0;

}