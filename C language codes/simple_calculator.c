#include <stdio.h>
int main() {
    char operator;
    double num1, num2, result;
    printf("==============================\n");
    printf("       SIMPLE CALCULATOR      \n");
    printf("==============================\n");
    printf("Available operators: +, -, *, /\n\n");
    
    printf("Enter an operator (+, -, *, /): ");
    if (scanf(" %c", &operator) != 1) {
        printf("Error: Invalid operator input.\n");
        return 1;
    }
    
    printf("Enter two numbers (separated by space): ");
    if (scanf("%lf %lf", &num1, &num2) != 2) {
        printf("Error: Invalid numeric input.\n");
        return 1;
    }
    
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("\nResult: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("\nResult: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("\nResult: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '/':
            if (num2 == 0.0) {
                printf("\nError: Division by zero is not allowed.\n");
            } else {
                result = num1 / num2;
                printf("\nResult: %.2lf / %.2lf = %.2lf\n", num1, num2, result);
            }
            break;
        default:
            printf("\nError: '%c' is an invalid operator.\n", operator);
            break;
    }
    return 0;
}