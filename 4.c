/* A five-digit number is entered through the keyboard. Write a program to obtain the reversed 
number and to determine whether the original and reversed numbers are equal or not . */

#include<stdio.h>
int main(){

    int n,o_num,r_num;

    printf("Enter a five digit number: ");
    scanf("%d", &n);

    o_num=n;

    while (n!=0){
        r_num = r_num * 10;
        r_num = n%10 + r_num;
        n = n/10;
    }
    
    printf("Reversed Number of %d is %d\n",o_num, r_num);

    if (n==r_num)
        printf("Input Number %d & Reversed Number %d are equal", o_num, r_num);
    else
        printf("Input Number %d & Reversed Number %d are not equal", o_num, r_num);



    return 0;
}