#include<stdio.h>

    int leapornot(int n);

int main(){

    int n;
    printf("Enter a year: ");
    scanf("%d", &n);

    leapornot(n);

    return 0;
}


int leapornot(int n){
 
    if(n%4==0 && n%100 !=0 || n%400==0)
        printf("Leap Year");
  
    else    
        printf("Not Leap Year");
}