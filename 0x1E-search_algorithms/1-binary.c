#include "search_algos.h"

/**
 * binary_search - performs binary search
 * @array: the integer array
 * @size: its size
 * @value: value to search for
 *
 * Return: the index found or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t m = 0;
	int *a = array;

	if (!array)
		return (-1);

	while (size)
	{
		for (m = 0, printf("Searching in array: "); m < size; m++)
			printf("%d%s", a[m], m + 1 == size ? "\n" : ", ");

		m = (size - 1) / 2;
		if (a[m] == value)
			return ((a - array) + m);
		else if (a[m] > value)
			size = m;
		else
		{
			a += (m + 1);
			size -= (m + 1);
		}
	}
	return (-1);
}
