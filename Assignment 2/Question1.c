// If cost price and selling price of an item is input through the keyboard write a program
// to determine weaqther the seller has made a profit or a loss. Also determine how much profit or loss.

#include<stdio.h>

int main(){
    int buy, sell;
    printf("Enter buying and selling price seperated by commas:");
    scanf("%i, %i", &buy, &sell);
    if(buy > sell){
        printf("Loss of %i", buy-sell);
    }
    else if(buy == sell){
        printf("No profit or loss.");
    }
    else{
        printf("Profit of %i", sell-buy);
    }
    return 0;
}
