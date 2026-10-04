#include<stdio.h>
//program to check if the number is divisible by 2 or not and also check if it is even or odd
int main ()
{
    int x;
    printf(" enter a number :");
    scanf("%d", &x);

    if (x % 2 == 0)
    {
        printf("\n number is divisible by 2 ");
        printf(" \n it is an even number ");
    }
    else

    {
        printf("\n number is not divisible by 2 ");
        printf("  \n it is an odd number ");
    }
    return 0;

}
