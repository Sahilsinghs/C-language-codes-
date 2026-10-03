#include<stdio.h>
//program to check if the number is divisible by 2 or not 
int main ()
{
    int x;
    printf(" enter a number :");
    scanf("%d", &x);
    printf("%d", x % 2 == 0);
    if (x % 2 == 0)
    {
        printf("\n number is divisible by 2");
    }
    else

    {
        printf("\n number is not divisible by 2 ");
    }
    return 0;

}