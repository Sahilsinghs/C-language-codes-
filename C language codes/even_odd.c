#include<stdio.h>
// program to find whether the enter number is even or odd
int main ()
{
    int n;
    printf("enter any number: ");
    scanf("%d",&n);
    if(n % 2 == 0)
    {
        printf("\n even");
    }
    else
    {
        printf("\n odd");
    }
    return 0;
}
