#include<stdio.h>

    int posorneg(int n);

int main(){

    int n;
    printf("Enter an integer value: ");
    scanf("%d", &n);

    posorneg(n);

    return 0;
}


int posorneg(int n){
 
    if(n>=0)
        printf("Positive");
  
    else    
        printf("Negative");
}