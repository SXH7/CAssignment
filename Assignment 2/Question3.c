// Any year is input through the keyboard. Write a program to determine weather the year is a leap year or not.

#include<stdio.h>

void main(){

    int year;
    printf("Enter year: ");
    scanf("%i", &year);
    if(year%4 == 0){
        printf("Yes, it is a lead year.");
    }
    else{
        printf("Not a leap year.");
    }

}