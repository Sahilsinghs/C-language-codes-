#include<stdio.h>
// program to convert celsius to farenhite for any value of celsius.
int main()
{
    float celsius, farenhite;
    printf(" enter the temperature in celsius :");
    scanf( "%f", &celsius);
    farenhite = (celsius*9/5)+32;
    printf("temperature in farenhite is :%f", farenhite);
    return 0;
}