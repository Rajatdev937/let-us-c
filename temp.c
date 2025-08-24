// Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/
#include<stdio.h>
int main ()
{
float fahr,cels;//fahr=fahrenheit cels=celsius

printf("enter the temperature in celsius= ",cels);//inputs the temprature in celsius from user
scanf("%f",&cels);

fahr=(cels*9.0/5.0)+32;

printf("temperature in Fahrenheit = %f\n",fahr);//give the temprature in fahrenheit

return 0;
}