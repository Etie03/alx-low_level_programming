#include "search_algos.h"

/**
 * exponential_search - performs exponential search
 * @array: the integer array
 * @size: its size
 * @value: value to search for
 *
 * Return: the index found or -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, newsize = 0;
	int ret;

	if (!array || !size)
		return (-1);

	while (i < size && array[i] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i <<= 1;
	}
	newsize = (i >= size ? size : i + 1) - (i >> 1);
	i >>= 1;
	printf("Value found between indexes [%lu] and [%lu]\n",
			i, i << 1 >= size ? size - 1 : i << 1);
	ret = binary_search(array + i, newsize, value);
	return (ret == -1 ? ret : ret + (int)i);
}

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
