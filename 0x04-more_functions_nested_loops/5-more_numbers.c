#include "main.h"

/**
 * more_numbers - a function that prints 10 times the numbers
 *  from 0 to 14
 *
 * Return: nothing
 */

void more_numbers(void)
{
int m, p;

for (m = 0; m < 10; m++)
{
for (p = 0; p <= 14; p++)
{
if (p > 9)
{
_putchar((p / 10) + '0');
}

_putchar((p % 10) + '0');
}

_putchar('\n');
}
}
