/* If the ages of Arif, Fahmid and Joy are input through the keyboard, write a program to 
determine the youngest of the three. */

#include<stdio.h>

    int youngest(int Arif,int Fahmid, int Joy);

int main(){

    int Arif,Fahmid,Joy;
    printf("Enter ages of Arif, Fahmid and Joy: ");
    scanf("%d %d %d", &Arif, &Fahmid,  &Joy);

    youngest(Arif, Fahmid, Joy);

    return 0;
}


int youngest(int Arif,int Fahmid, int Joy){
 
    if(Arif<Fahmid && Arif<Joy){
        printf("Arif is youngest");
    }
    else  if(Fahmid<Arif && Fahmid<Joy)  {
        printf("Fahmid is youngest");
    }
     else
        printf("Joy is youngest");


}