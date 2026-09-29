#include<stdio.h>
// program to check enter alphabet is vowel or not 
void main ()
{
    char ch;
    printf("enter any alphabet: ");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
        printf("\n vowel");
        break;
        default :printf("\n not vowel");
    }
    }

