#include <stdio.h>
int multiply(int num1, int num2)
{
     int mult;

     mult = num1*num2;

     return mult;
}

int main()
{
     int var1, var2;
     printf("Enter number 1: ");
     scanf("%d",&var1);
     printf("Enter number 2: ");
     scanf("%d",&var2);

     int res = multiply(var1, var2);
     printf ("Output=: %d", res);

     return 0;
}
