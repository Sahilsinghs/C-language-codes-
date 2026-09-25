#include<stdio.h>

void main()
{
    int n, K , S = 0;
    printf("\n enter any 4 digit number");
    scanf("%d",&n);
    for( ; n>0 ; ) 
    {
        K = n % 10;
        S = S*10 + K;
        n = n/10 ;
    }
    printf ("\n revesed=%d",S);

}