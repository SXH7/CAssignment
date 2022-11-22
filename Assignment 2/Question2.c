// Any integer is input through the keyboard, write a program to find out weather it is odd or even

#include<stdio.h>

int main(){
    int x;
    printf("Enter integer: ");
    scanf("%i", &x);
    if(x%2){
        printf("Odd");
    }
    else{
        printf("Even");
    }
}
