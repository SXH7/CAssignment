// Determine youngest among ram shyam and ajay

#include<stdio.h>

void main(){
    int ram, shyam, ajay;
    printf("Enter ages of ram, shyam and ajar seperated by commas: ");
    scanf("%i, %i, %i", &ram, &shyam, &ajay);

    if(ram<shyam){
        if(ram<ajay){
            printf("Ram is the youngest");
        }
        else{
            printf("Ajay is youngest");
        }
    }
    else{
        if(shyam<ajay){
            printf("Shyam is youngest");
        }
        else{
            printf("Ajay is youngest");
        }
    }

}