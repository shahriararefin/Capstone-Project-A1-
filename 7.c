// Id:221-35-1018

#include<stdio.h>
int main(){

    int num, remainder, sum=0;
    printf("Enter five digit number: ");
    scanf("%d", &num);

    while (num!=0)
    {
        remainder=num%10;
        sum+=remainder;
        num/=10;
    }

    printf("Sum of the number is : %d", sum);

    return 0;
    
}