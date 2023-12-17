#include <stdio.h>
float fer_to_cel(float celcius){
    return (celcius*9/5)+32;

}
float cel_to_fer(float ferenheit){
    return (ferenheit-32)*5/9;

}
int main (){
    int choice ;
    float temperature;
    while (1)
    {printf("1. convert celcius to ferenheit\n");
    printf("2. convert ferenheit to celcius \n ");
    printf("3. quit\n");
    printf("enter choice");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
    printf("enter temp in celcius");
    scanf("%f",&temperature);
    printf("%f fahrenhiet",fer_to_cel(temperature));
        break;
    case 2:
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &temperature);
    printf(" %f Celsius\n",  cel_to_fer(temperature));
      break;
   case 3:
    printf("Quitting the program.\n");
    return 0;
    
    default:
    printf("error");

        break;
    }

return 0;

    }
    
}