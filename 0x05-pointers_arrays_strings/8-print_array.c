#include "main.h"

/**
 * print_array -This function that prints n elements of an array
 * @a: The array name
 * @n: This is the number of elements of the array
 * Return: a and n inputs
 */

void print_array(int *a, int n)
{
int k;

for (k = 0; k < (n - 1); k++)
{
printf("%d, ", a[k]);
}
if (k == (n - 1))
{
printf("%d", a[n - 1]);
}
printf("\n");
}

