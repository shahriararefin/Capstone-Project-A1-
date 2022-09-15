/*If cost price and selling price of an item is input through the keyboard, write aprogram to 
determine whether the seller has made profit or incurred loss. Also determine how much profit 
he made or loss he incurred */

#include<stdio.h>

int main(){

    int cost,sell;
    
    printf("Enter the cost price of the item: ");
    scanf("%d", &cost);

    printf("Enter selling price of the item: ");
    scanf("%d", &sell);

    if(cost>sell){
        printf("Seller has made loss of: %d", cost-sell);

    }

    else
        {
            printf("Seller has made profit of: %d", sell-cost);
        }

    
    return 0;
}