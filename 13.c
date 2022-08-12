// Id:221-35-1018

#include<stdio.h>
int main()
{

    int a,b,c;
    printf("Enter The year: ");
    scanf("%d",&a);
    if(a % 4 == 0 && a % 100 != 0 || a % 400 == 0)
    {
        printf("%d is leap a year", a);
    }
    else
    {
        printf("%d is not a leap year",a);
    }
    return 0;

}