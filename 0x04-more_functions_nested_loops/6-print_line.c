#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal
 * @n: number of line to draw
 *
 * Return: void
 */

void print_line(int n)
{
int p = 0;

while (p < n)
{
_putchar('_');
p++;
}
_putchar('\n');
}
