#include <stdio.h>

int main() {
    char operator;
    double num1,num2,result;
    do {
        printf("Choose an operation (+, -, *, /) or enter  'q' to quit: ");
        scanf(" %c", &operator);
        if (operator == 'q') {
            break;
        }
        printf("Enter any  two numbers: ");
        scanf("%lf %lf", &num1, &num2);
        if (operator == '+') {
            result = num1 + num2;
        } else if (operator == '-') {
            result = num1 - num2;
        } else if (operator == '*') {
            result = num1 * num2;
        } else if (operator == '/') {
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Error: Division by zero!\n");
                continue; 
            }
        } else {
            printf("Error: Invalid operator!\n");
            continue; 
        }
        printf("Result is : %.2f\n", result);

    } while (1); 

    printf(" the program of Calculator is finished.\n");

    return 0;
}
