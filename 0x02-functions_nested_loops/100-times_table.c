#include "main.h"

/**
 * print_times_table - a function that prints the n times table
 * @n: number to be printed
 * Return: nothing
 */

void print_times_table(int n)
{
int p, j, r;

if (n >= 0 && n <= 15)
{
for (p = 0; p <= n; p++)
{
for (j = 0; j <= n; j++)
{
r = j * p;
if (j == 0)
{
_putchar(r + '0');
}
else if (r < 10 && j != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar(r + '0');
}
else if (r >= 10 && r < 100)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar((r / 10) + '0');
_putchar((r % 10) + '0');
}
else if (r >= 100)
{
_putchar(',');
_putchar(' ');
_putchar((r / 100) + '0');
_putchar(((r / 10) % 10) + '0');
_putchar((r % 10) + '0');
}
}
_putchar('\n');
}
}
}
