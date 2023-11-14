#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal
 * @n: number of times to print diagonal line
 *
 * Return: void
 */

void print_diagonal(int n)
{

int x = 0;
int y;

if (n > 0)
{
while (x < n)
{
for (y = 0; y < x; y++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
x++;
}
}
else
{
_putchar('\n');
}
}
