// converting km to different 

#include<stdio.h>
int main (){
      float distanceInKm, distanceInMeters, distanceInFeet, distanceInInches, distanceInCentimeters;
printf("enter distance in km");
scanf("%f",&distanceInKm);
distanceInMeters=distanceInKm *1000;
distanceInCentimeters=distanceInKm*100000;
distanceInInches=distanceInKm*39370;
distanceInFeet=distanceInKm*3280.84;

   printf("Distance in kilometers: %.2f km\n", distanceInKm);
    printf("Distance in meters: %.2f m\n", distanceInMeters);
    printf("Distance in centimeters: %.2f cm\n", distanceInCentimeters);
    printf("Distance in inches: %.2f inches\n", distanceInInches);
    printf("Distance in feet: %.2f feet\n", distanceInFeet);
    return 0;

}