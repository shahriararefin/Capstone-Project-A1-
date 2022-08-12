// Id:221-35-1018

#include<stdio.h>

int main() {

    float Math, English, Bangla, Physics, Chemistry, Aggregate_Mark, Percentage_Mark;

    printf("Marks obtained in Math: \n");
    scanf("%f", &Math);

    printf("Marks obtained in English: \n");
    scanf("%f", &English);

    printf("Marks obtained in Bangla: \n");
    scanf("%f", &Bangla);

    printf("Marks obtained in Physics: \n");
    scanf("%f", &Physics);

    printf("Marks obtained in Chemistry: \n");
    scanf("%f", &Chemistry);


    Aggregate_Mark= Math+English+Bangla+Physics+Chemistry;
    printf("Aggregate Mark is: %f\n", Aggregate_Mark);

    Percentage_Mark= Aggregate_Mark/5;
    printf("Average Mark is: %f", Percentage_Mark);



    return 0;
} 