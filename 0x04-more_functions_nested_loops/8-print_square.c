#include "main.h"

/**
 * print_square - a function that prints a square
 * @size: The number of squares and number of times
 *
 * Return: void
 */

void print_square(int size)
{
int m;
int p;

if (size > 0)
{
for (m = 0; m < size; m++)
{
for (p = 0; p < size; p++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
