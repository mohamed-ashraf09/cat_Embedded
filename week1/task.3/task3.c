/*Write a program that asks the user to enter a dollars and cents amount, then display the
amount with 5% tax added:
INPUT: Enter an amount: 100.00
OUTPUT: With tax added : $ 105.00*/
#include<stdio.h>

int main()
{
    float z , tax ;

printf("please inter your money :");

scanf("%f",&z);

tax= z * 1.05 ;

printf("your money is : %0.4f\n",z);
printf("your tax is :%0.4f",tax);

    return 0 ;
}