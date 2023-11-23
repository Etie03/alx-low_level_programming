#include "main.h"
#include <stdlib.h>
/**
 * array_range - a function that creates an array of integers
 * @min: the minimum value
 * @max: the maximum value
 *
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *n, m = 0;

	if (min > max)
		return (NULL);

	n = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (n == NULL)
		return (NULL);

	while (min <= max)
	{
		n[m] = min;
		m++;
		min++;
	}

	return (n);
}
