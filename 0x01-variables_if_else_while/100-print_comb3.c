#include <stdio.h>
/**
 * main -  a program that prints combinations of two digits
 *
 * Return: return 0
 */

int main(void)
{
int i;

for (i = 0; i <= 99; i++)
{
int first_digit = i / 10;
int second_digit = i % 10;

if (first_digit != second_digit && first_digit < second_digit)
{
putchar('0' + first_digit);
putchar('0' + second_digit);

if (i != 89)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
