#include<stdio.h>
// program to swap the 2 variable without using 3rd variable.
int main()
{
    int x,y;
    printf("enter 2 numbers to swap: ");
    scanf("%d %d",&x,&y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("after swapping: %d %d",x,y);
    return 0;
}
