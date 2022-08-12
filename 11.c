// Id:221-35-1018


#include<stdio.h>
int main() {

     int cost_price, selling_price, profit, loss;

     printf("Enter the cost of the item: ");
     scanf("%d", &cost_price);

     printf("Enter the selling price of the item: ");
     scanf("%d", &selling_price);

     if(selling_price>cost_price){
        profit=selling_price-cost_price;
        printf("Profit = %d");
     }   
        else    {
            loss=cost_price-selling_price;
            printf("Loss = %d");

        }
    return 0;

}