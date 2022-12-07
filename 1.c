#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void option();
int fact(int n) {
    if(n == 0) {
        return 1;
    }

    return (n * fact(n - 1));
}

int main() {
    int opt, choice = 1;

    while(choice) {
        option();
        printf("Choice an option: ");
        scanf("%d", &opt);

        switch(opt) {
            case 1: {
                    int *arr;
                    int n, i, max;

                    printf("Enter the size of the array: ");
                    scanf("%d", &n);

                    arr = (int *)malloc(sizeof(int) * n);

                    printf("Enter %d element for element's of array: ", n);
                    for(i = 0; i < n; i++) {
                        scanf("%d",(arr+i));
                    }

                    max = *(arr);

                    for(i = 0; i < n; i++) {
                        if(*(arr+i) > max) {
                            max = *(arr+i);
                    }
                }

                printf("The maximum value of the array is %d\n", max);
            }
            break;

            case 2:
                {
                    int num;
                    printf("Enter a number for test: ");
                    scanf("%d", &num);

                    if(num == 0) {
                        printf("%d is zero\n", num);
                    }
                    else if(num % 2 == 0) {
                        printf("%d is even number\n", num);
                    }
                    else {
                        printf("%d is odd number\n", num);
                    }
                }
            break;

            case 3:
                {
                    int len, i, j, com;
                    char word[20], reverse_word[20];

                    printf("Write a word for check: ");
                    scanf("%s", word);

                    len = strlen(word);

                    for(i = 0, j = (len - 1); i < len; i++, j--) {
                        reverse_word[j] = word[i];
                    }

                    com = strcmp(word, reverse_word);
            
                    if(com == 0) {
                        printf("%s is palindrome\n", word);
                    }
                    else {
                        printf("%s is not palindrome\n", word);
                    }
                }
                break;

            case 4:
                {
                    int num, result;
                    printf("Enter a number for find it's factorial: ");
                    scanf("%d", &num);
                    
                    result = fact(num);

                    printf("Factorial of %d is %d\n", num, result);
                }
            break;
            

            default:
                printf("Invalid input______");
            break;
        }
        printf("Do you want to continue?\n(press zero(0) for exit): ");
        scanf("%d", &choice);
        
    }
    return 0;
}

void option() {
    printf("1. For find maximum in an array\n");
    printf("2. Check odd even numbers\n");
    printf("3. Check palindrome\n");
    printf("Factorial with recursion\n");
}