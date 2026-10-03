#include<stdio.h>
// This program checks if a given number is a two-digit number or not
int main ()
{
    int x;
    printf("enter a number :");
    scanf("%d",&x);
   
    if(x>9 && x<100)
    {
        printf("number is 2 digit number");
    }
else
{
    printf("number is not 2 digit number ");
}
return 0;
}