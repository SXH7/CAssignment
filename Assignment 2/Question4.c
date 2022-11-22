// Write a program to check if a triangle is valid or not where the three anglesa re entered through the keyboard.

#include<stdio.h>

void main(){

    int x, y, z;
    printf("Enter the three angles seperated by commas: ");
    scanf("%i, %i, %i", &x, &y, &z);
    if(x+y+z == 180){
        printf("The triangle is valid.");
    }
    else{
        printf("Not a valid triangle.");
    }
}