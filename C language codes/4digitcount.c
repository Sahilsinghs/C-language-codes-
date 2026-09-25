#include<stdio.h>

void main()
{
    int n, k, e = 0, d = 0;
    printf("\n enter any no.");
    scanf("%d", &n);
    for ( ; n > 0; )
    {
        k = n % 10;
        if (k % 2 == 0)
            e = e + 1;
        else
            d = d + 1;
        n = n / 10;
    }
    printf("\n Total even = %d", e);
    printf("\n Total odd = %d", d);
}