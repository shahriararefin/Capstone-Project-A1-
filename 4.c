// Id:221-35-1018

#include<stdio.h>
int main(){

    float fahrenheit, celcius;
    printf("Enter the temperature of Ashulia in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celcius= ((fahrenheit-32)*5)/9;

    printf("Temperature in celcius is: %.1f", celcius);

    return 0;
}