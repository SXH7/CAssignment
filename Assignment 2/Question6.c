// A five digit number is entered. Write a program to obtain the reversed number and check if the reversed number is same

#include<stdio.h>

void main(){
    int x, rev = 0, rem;

    printf("Enter 5 digit integer: ");
    scanf("%i", &x);
    while(x != 0){
        rem = x%10;
        rev = rev*10+rem;
        x = (x-rem)/10;
    }
    printf("%i", rev);

}