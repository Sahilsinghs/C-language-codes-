#include<stdio.h>
// program to find area of a triangle   
int main() {
float base, height;

printf("enter base,height of triangle with space between them");
scanf("%f",&base);
scanf("%f",&height);

printf("area of triangle is %f", 0.5*base*height);
return 0;
}