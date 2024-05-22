#include "search_algos.h"

/**
 * jump_search - performs jump search
 * @array: the integer array
 * @size: its size
 * @value: value to search for
 *
 * Return: the index found or -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t m = 0, g = sqrt(size);

	if (!array)
		return (-1);

	while (m < size && array[m] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", m, array[m]);
		m += g;
	}

	g = m - g;
	printf("Value found between indexes [%lu] and [%lu]\n", g, m);
	m = m >= size ? size - 1 : m;
	while (g <= m)
	{
		printf("Value checked array[%lu] = [%d]\n", g, array[g]);
		if (array[g] == value)
			return (g);
		g++;
	}
	return (-1);
}
