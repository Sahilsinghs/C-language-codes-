#include<stdio.h>
// program to find the entered number is a natural number
int main()
{
    int n ;
    printf("enter any number: ");
    scanf("%d", &n);
    if(n>0)
    {
        printf("natural number \n");
    }
    else
    {
        printf("not a natural number \n");
    }
    return 0;
}