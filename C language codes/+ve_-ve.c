#include<stdio.h>
// program to check the enter number is +ve or -ve.
int main()
{
    int num;
    printf("enter a number :");
    scanf("%d", &num);
    if(num>0)
    {
        printf("The entered number is Positive");
    }
    else
    {
        printf("The entered number is Negative");
    }
    return 0;
}