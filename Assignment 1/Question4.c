// Temprature of a city in farenhite is input through the keyboard
// Write a program to convert this temprature into centigrate

#include<stdio.h>

int main(){
    float temprature;

    printf("Enter the temprature in farenhite: ");
    scanf("%f", &temprature);
    printf("Temprature in celcius is: %f", (temprature-32)*5/9);

    return 0;
}