// Id:221-35-1018

#include<stdio.h>

int main() {

    float gross_salary, dearness_allowance, basic_salary, house_rent;
    printf("Enter Niloys Basic Salary\n");
    scanf("%f", &basic_salary);

    dearness_allowance= basic_salary-40%
    printf("Enter dearness allowance: \n");
    scanf("%f", &dearness_allowance);

    house_rent= basic_salary-20%
    printf("Enter the house rent \n");
    scanf("%f", &house_rent);

    gross_salary=basic_salary+dearness_allowance+house_rent;

    printf("Niloys gross salary is %.0f", gross_salary);


    return 0;
}