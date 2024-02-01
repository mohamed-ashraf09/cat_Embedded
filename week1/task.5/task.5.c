/*Write a code that scans 3 numbers from the user and prints them in reversed order.*/
#include<stdio.h>

int main()
{
   int x , y , z , f ;
   printf("enter your three nums :\n");
   scanf("%d %d %d", &x , &y , &z );
   
      f=x;
      x=z;
      z=f;
      printf("%d \n %d \n %d", x , y , z);

    return 0 ;
}