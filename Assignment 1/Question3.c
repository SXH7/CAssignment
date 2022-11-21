// If the marks obtained by a student in five different subjects are input through the keyboard,
// Write a program to find out the aggregrate marks and the precentage marks obtaiend by the student.
// Assume that the maximum marks that can be obtained by a student in each subject is 100.

#include<stdio.h>

int main(){

    float marks[] = {0, 0, 0, 0, 0};
    int i;
    float mark, total;

    for(i = 0; i < 5; i++){
        printf("Enter Marks");
        scanf("%f", &mark);
        total = total+mark;
        marks[i] = mark;
    }
    printf("Total percentage of the student is: %f", total/5);

    return 0;

}