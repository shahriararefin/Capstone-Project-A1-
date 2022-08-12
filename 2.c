// Id:221-35-1018

#include<stdio.h>

int main() {

    float meter, m, cm, inch, feet;
    printf("The distance between Ashulia and Mirpur is: \n");
    scanf("%f", &m);

    cm = m*100;
    inch = m*39.37;
    feet = m*3.21;

    printf("The distance in centimeter is: %.2f\n", cm);
    printf("The distance in inch is: %.2f\n", inch);
    printf("The distance in feet is: %.2f\n", feet);



    return 0;
} 