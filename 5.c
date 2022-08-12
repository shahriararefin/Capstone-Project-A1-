// Id:221-35-1018

#include<stdio.h>
#define PI 3.1416
int main() {

    float length, breadth, area, perimeter;
    float circle_area, radius, circumference;

    printf("Enter the length of a rectangle: \n");
    scanf("%f", &length);
    
    printf("Enter the breadth of a rectangle: \n");
    scanf("%f", &breadth);

    printf("Enter radius of the circle\n");
    scanf("%f", &radius);


    area= length*breadth;
    printf("Rectangle's area is: %.1f\n", area);

    perimeter= (2*(length*breadth));
    printf("Perimeter of the rectangle is: %.1f\n", perimeter);

    circle_area= PI*(radius*radius);
    printf("The area of the circle is %f\n", circle_area);

    circumference= 2*PI*radius;
    printf("The circumference of the circle is %f", circumference);

   

    return 0;
}