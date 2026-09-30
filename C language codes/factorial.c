#include<stdio.h>
//program to find factorial of a number
int main()
{
    int n,f=1;
    printf("Enter any number: ");
    scanf("%d",&n);

    while(n>0)
    {
        f=f*n;
        n--;
    }
    printf("Factorial= %d",f);
    return 0;
}
