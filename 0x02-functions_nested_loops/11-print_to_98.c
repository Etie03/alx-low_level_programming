#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - a function that prints all natural numbers
 * @n: number to be printed
 */

void print_to_98(int n)
{
while (n != 98)
{
printf("%d, ", n);
n = (n > 98) ? n - 1 : n + 1;
}
printf("%d\n", n);
}
