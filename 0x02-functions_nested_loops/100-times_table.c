#include "main.h"

/**
 * print_times_table - a function that prints the n times table
 * @n: number to be printed
 * Return: nothing
 */

void print_times_table(int n)
{
for (int mult = 1; mult <= n; mult++)
{
    _putchar(',');
    _putchar(' ');

    int prod = num * mult;

    if (prod <= 99)
        _putchar(' ');
    if (prod <= 9)
        _putchar(' ');

    if (prod >= 100) {
        _putchar((prod / 100) + '0');
        _putchar(((prod / 10)) % 10 + '0');
    }
    else if (prod <= 99 && prod >= 10)
    {
        _putchar((prod / 10) + '0');
    }
    _putchar((prod % 10) + '0');
}

_putchar('\n');
