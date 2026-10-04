#include<stdio.h>
// program to check whether the student has passed or failed
int main()
{
    float marks;
    printf("enter marks obtained from 0-100 :");
    scanf("%f", &marks);
    if (marks >=30)
    {
        printf("PASS");
    }
else
{
    printf("FAIL");
}
return 0;
}