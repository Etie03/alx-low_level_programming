#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - a function that prints strings, followed by a new line
 * @separator: string to be printed between strings
 * @n: number of strings passed to the function
 *
 *  Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int m = 0;
	char *string;

	if (n > 0)
	{
		va_start(args, n);

		while (m < n)
		{
			string = va_arg(args, char *);
			if (string == NULL)
				printf("%s", "(nil)");
			else
				printf("%s", string);

			if (m != n - 1 && separator != NULL)
				printf("%s", separator);

			m++;
		}

		va_end(args);
	}

	printf("\n");
}

