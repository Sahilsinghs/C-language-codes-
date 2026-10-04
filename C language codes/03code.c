#include<stdio.h>
#include<math.h>
// learning some new math operation 
int main()
{
    int a=1, b=2, c=3;
    int power = pow(b,c);
    printf("power is %d \n",power);
   printf(" remainder is %d \n",19%3 );
   // here % means modular ( remaindar), does not work for float values, only works for integer values
   printf("remainder is %d \n", -119%4); 
   int x= 5*(2/2)*3;
   printf("value of x is %d \n", x);
   // left to right calculation 
   printf("%d \n", 5>2 && 3<=5);
   // in  logical and (&&) case if both statement are true then it will return 1 otherwise 0
   printf("%d \n", 5>2 || 3>5);
   // in logical or (||) case if any one staement is true then it will return 1 otherwise 0
    printf("%d \n", !5<2);
    printf("%d \n", !(5>2 && 3<=5));
    // in logical not (!) case it will return 1 if the statement is false and 0 if the statement is true


    return 0;
}
