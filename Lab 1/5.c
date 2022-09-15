#include<stdio.h>

    int eligibleornot(int n);

int main(){

    int n;
    printf("Enter age of a candidate: ");
    scanf("%d", &n);

    eligibleornot(n);

    return 0;
}


int eligibleornot(int n){
 
    if(n>=18)
        printf("Eligible");
  
    else    
        printf("Not Eligible");
}