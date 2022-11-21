// The length and breadth of a rectangle and radius of a circle are input through the keyboard.
// Write a program to calculate the area and perimeter of the rectangle and the area anf circumference of circle.

#include<stdio.h>

int main(){

    float len, brd, rad;

    printf("Input length of rectangle, breadth of rectangle and radius of circle seperated by commas: ");
    scanf("%f, %f, %f", &len, &brd, &rad);
    printf("Perimeter of rectangle: %f \n", (2*len+2*brd));
    printf("Area of rectangle: %f \n", len*brd);
    printf("Circumference of circle: %f \n", 2*3.14*rad);
    printf("Area of circle: %f", 3.14*rad*rad);

    return 0;

}