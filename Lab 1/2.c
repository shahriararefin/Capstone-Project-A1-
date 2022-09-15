#include<stdio.h>

    int oddornot(int n);

int main(){

    int n;
    printf("Enter an integer value: ");
    scanf("%d", &n);

    oddornot(n);

    return 0;
}


int oddornot(int n){
 
    if(n%2 != 0)
        printf("Odd");
  
    else    
        printf("Even");
}