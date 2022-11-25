#include<stdio.h>
#include<string.h>


int length(char x[]){
 int i = 0;
 while(x[i] != '\0'){
  i++;
 }
 return i;
}

void main(){
 char x[20];
 printf("Enter the length of the string \n");
 scanf("%s", &x);
 printf("\n Length of string is: \n %d", length(x));
}
