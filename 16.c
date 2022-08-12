// Id:221-35-1018

#include<stdio.h>
int main(){

    int a,b,c, angle;

    printf("Input three angle's value of a triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    angle= a+b+c;

    if(angle==180)
    {
        printf("Triangle is Valid");
    }
    else
    {
        printf("Triangle is not valid");
    }

    return 0;
}