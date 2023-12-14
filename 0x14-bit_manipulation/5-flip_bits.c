#include "main.h"

/**
 * flip_bits - a function that returns the number of bits you would
 * need to flip to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: the number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int gen = 0, numbs = 0;

	gen = n ^ m;
	while (gen)
	{
		if (gen & 1)
			numbs++;

		gen >>= 1;
	}

	return (numbs);
}
