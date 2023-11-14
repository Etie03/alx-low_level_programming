#include "main.h"

/**
 * print_most_numbers - a function that prints the numbers, from 0 to 9
 * Does not print 2 and 4
 *
 * return: nothing
 */

void print_most_numbers(void)
{
	int m;

	for (m = '0'; m <= '9'; m++)
	{
		if (m == '2' || m == '4')
			;
		else
			_putchar(m);
	}
	_putchar('\n');
}
