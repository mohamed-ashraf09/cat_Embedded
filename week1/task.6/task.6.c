/*Write a code that takes 2 numbers and print the arithmetical, logical and bitwise
operations.*/
#include<stdio.h>

int main ()
{
     int x , y ;

    printf("enter your two nums :\n");
    scanf("%d %d", &x , &y);

    printf("Arithmetic operations :\n"); 

    printf("x + y = %d\n", x+y);
    printf("x - y = %d\n", x-y);
    printf("x * y = %d\n", x*y);
    printf("x / y = %d\n", x/y);
    printf("x mode y = %d\n", x%y);

    printf("Logical operations :\n"); 

    printf("x && y = %d\n", x&&y);
    printf("x || y = %d\n", x||y);
    printf("!x = %d\n", !x);
    printf("!y = %d\n", !y);

    printf("Bitwise operations :\n");

    printf("x & y = %d\n", x&y);
    printf("x | y = %d\n", x|y);
    printf("x ^ y = %d\n", x^y);
    printf("~x = %d\n", ~x);
    printf("~y = %d\n", ~y);

    return 0;
}