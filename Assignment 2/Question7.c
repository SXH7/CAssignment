// Given len and breadth of rectangle, find if area > perimeter 

#include<stdio.h>

void main(){
    int len, brd;
    printf("Enter length and breadth seperated by comma: ");
    scanf("%i, %i", &len, &brd);
    int perimeter = 2*len + 2*brd, area = len*brd;
    if(area>perimeter){
        printf("Area > Perimeter");
    }
    else{
        printf("Perimeter > Area");
    }
}