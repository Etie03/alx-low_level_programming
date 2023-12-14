#include "main.h"
/**
 * get_bit - a function that returns the value of a bit at a given index
 * @n: unsigned long int
 * @index: index of the bit
 *
 * Return: value of the bit @index or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int m;

	if (n == 0 && index < 64)
		return (0);

	for (m = 0; m <= 63; n >>= 1, m++)
	{
		if (index == m)
		{
			return (n & 1);
		}
	}

	return (-1);
}
