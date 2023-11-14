#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints the numbers from 1 to 100
 *for multiples of three print Fizz and for the multiples of five print Buzz
 *For numbers which are multiples of both three and five print FizzBuzz.
 * Return: 0
 */

int main(void)
{
int m;

for (m = 1; m < 101; m++)
{
if (m % 5 == 0 && m % 3 == 0)
printf("FizzBuzz ");
else if (m % 5 == 0)
if (m == 100)
printf("Buzz");
else
printf("Buzz ");
else if (m % 3 == 0)
printf("Fizz ");
else
printf("%d ", m);
}
printf("\n");

return (0);
}
