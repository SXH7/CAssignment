// The distance between two cities is input through the keyboard. Write a rpogram to conmvert and print this 
// distance in meters, feet and centimeters

#include<stdio.h>

int main(){

    float dist;
    printf("Enter the distance to be converted(in KM): ");
    scanf("%f", &dist);
    printf("Distance in Meters %f \n", dist*1000);
    printf("Distance in Feet %f \n", dist*3000);
    printf("Distance in Inches %f \n", dist*36000);
    printf("Diatance in Centimeters %f \n", dist*100000);

    return 0;
}
