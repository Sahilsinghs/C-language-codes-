#include<stdio.h>
// program to give grade based on marks obtained out off 100 
int main()
{
    float marks;
    printf("enter marks obtained from 0-100 :");
    scanf("%f", &marks);
    if ( marks >=90 && marks <=100 )
    {
        printf("Grade : A+ \n");
        printf("PASS");
    }
    else if( marks >= 70 && marks <90)
    {
        printf("Grade : A \n");
        printf("PASS");
    }
else if (marks >=30 && marks < 70)
{
    printf("Grade : B \n");
    printf("PASS");
}
else if (marks >=0 && marks <30)
{
    printf("Grade : C \n");
    printf("FAIL");
}

else if (marks<0 || marks >100)
{
    printf("invalid marks ");
}

return 0;
}
