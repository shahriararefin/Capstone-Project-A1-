#include<stdio.h>

    int largest(int n,int p, int q);

int main(){

    int n,p,q;
    printf("Enter three integer value N,P,Q: ");
    scanf("%d %d %d", &n, &p, &q);

    largest( n,p,q);

    return 0;
}


int largest(int n,int p, int q){
 
    if(n>p && n>q){
        printf("N is largest");
    }
    else  if(p>n && p>q)  {
        printf("P is largest");
    }
     else
        printf("Q is largest");


}