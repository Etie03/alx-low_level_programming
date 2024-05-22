#include "search_algos.h"

/**
 * linear_search - performs linear search
 * @array: the integer array
 * @size: its size
 * @value: value to search for
 *
 * Return: the index found or -1
 */
int linear_search(int *array, size_t size, int value)
{
	int m;

	if (array == NULL)
		return (-1);

	for (m = 0; m < (int)size; m++)
	{
		printf("Value checked array[%u] = [%d]\n", m, array[m]);
		if (value == array[m])
			return (m);
	}
	return (-1);
}
