// Ramesh's Basic salary is input through the keyboard, His dearness allowance his 40% of his basic sallary
// House rent is 20% of basic salary. Write a program to calculate his gross salary.

#include<stdio.h>

int main(){

    int salary, gross;
    printf("Enter basic salary:");
    scanf("%i", &salary);

    gross = (40*salary)/100;
    printf("%i", gross);

    return 0;

}
