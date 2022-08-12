#include <stdio.h>
int main(){

int Arif, Fahmid, Joy;
printf("Enter 3 Ages: \n");
scanf("%d %d %d", &Arif, &Fahmid, &Joy);
if (Arif<Fahmid && Arif<Joy){
    printf("Arif is with the lowest age: %d\n ",Arif);
}
else if(Fahmid<Joy){
    printf("Fahmid is the lowest age: %d\n", Fahmid);
}

else
    {
printf("Joy is the lowest age: %d", Joy);
}
return 0;
} 