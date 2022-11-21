// Paper of size A0 has dimentions 1189 X 841 mm. Each subsequent size A(n) is defined as A(n-1) cut in half
// parallel to its shorter sides. Write a program to calculate and print paper sizes.

#include<stdio.h>

int main(){

    float height = 1189, width = 841;
    int i, temp;
    for(i = 0; i<9; i++){
        printf("Heigh, Width of A%i,%f,%f \n",i, height, width);
        temp = height;
        height=  width;
        width = temp/2;
    }

    return 0;
}