#include <stdio.h>
// program to find the factorial of a number

int main(void) {
    int n;
    unsigned long long factorial = 1;

    printf("Enter a non-negative integer: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    // Factorial is not defined for negative numbers
    if (n < 0) {
        printf("Error: Factorial of a negative number is undefined.\n");
    } else if (n > 20) {
        // 21! exceeds the maximum value of a 64-bit unsigned integer
        printf("Error: Result exceeds 64-bit limit. Maximum supported input is 20.\n");
    } else {
        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }
        printf("Factorial of %d = %llu\n", n, factorial);
    }

    return 0;
}
