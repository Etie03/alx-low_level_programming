#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - a function that prints numbers, followed by a new line
 * @separator: The string to be printed between numbers
 * @n: number of integers passed to the function
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int m = 0;

	if (n > 0)
	{
		va_start(args, n);

		while (m < n)
		{
			printf("%d", va_arg(args, int));

			if (m != n - 1  && separator != NULL)
				printf("%s", separator);

			m++;
		}
		va_end(args);
	}
	printf("\n");
}

