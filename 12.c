// Id:221-35-1018

#include<stdio.h>

int main() {

    int odd, even, result, num;

    printf("Enter a value \n");
    scanf("%d", &num);

    result= (num%2)? printf("The number %d is odd ",num):printf("The number %d is even ", num);


    return 0;
}