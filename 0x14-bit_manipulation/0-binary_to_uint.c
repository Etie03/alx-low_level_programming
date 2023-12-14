#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * @b: the pointer to a string
 *
 * Return: the unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int numb;
	int m;

	numb = 0;
	if (!b)
		return (0);
	for (m = 0; b[m] != '\0'; m++)
	{
		if (b[m] != '0' && b[m] != '1')
			return (0);
	}
	for (m = 0; b[m] != '\0'; m++)
	{
		numb <<= 1;
		if (b[m] == '1')
			numb += 1;
	}
	return (numb);
}

