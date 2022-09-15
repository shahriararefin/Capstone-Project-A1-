//program to accept the height of a person in centimeter and categorize the person according to their height
#include <stdio.h>

void main() {

  float height;
  printf("Enter  the Height (in centimeters)\n");
  scanf("%f", &height);


 /* using if we compare the heights */
  if (height < 150)
    printf("This person is Short\n");

  else if ((height >= 150) && (height <= 165.0))
    printf("This person has Average Height\n");

  else if ((height >= 165.0) && (height <= 195.0))
    printf("This person is Taller than other\n");

  else
    printf("This person is of Abnormal height\n");

}