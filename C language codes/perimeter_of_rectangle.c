#include<stdio.h>
// This program calculates the perimeter of a rectangle of any integer length and width
int main()
{
    int length,width;
    printf("enter length of rectangle:");
    scanf("%d",&length);
    printf("enter width of rectangle :");
    scanf("%d", &width);

    int perimeter = 2*(length + width);
    printf("perimeter of rectangle is :%d", perimeter);
    return 0;

}