#include "variadic_functions.h"
/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: the const integer
 *
 * Return: the sum
 */

int sum_them_all(const unsigned int n, ...);
{
va_list args;
unsigned int m, sum = 0;

va_start(args, n);

for (m = 0; m < n; m++)
sum += va_arg(args, int);

va_end(args);


return (sum);
}
