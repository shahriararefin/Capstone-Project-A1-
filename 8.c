// Id:221-35-1018

#include<stdio.h>
int main(){

    int num, remainder, sum=0,rev_n=0,original_num;
    printf("Enter five digit number: ");
    scanf("%d", &num);
    original_num=num;

    while (num!=0)
    {
        remainder=num%10;
        rev_n=rev_n*10+remainder;
        num/=10;
    }

    printf("Reverse number is : %d\n", rev_n);

    return 0;
    
}