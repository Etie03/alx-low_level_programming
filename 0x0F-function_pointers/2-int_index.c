#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer
 * If no element matches, return -1 and If size <= 0, return -1
 * @array: the array
 * @size: size of elements in array
 * @cmp: function pointer
 *
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int m;


	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);


	for (m = 0; m < size; m++)
	{
		if (cmp(array[m]))
			return (m);
	}
	return (-1);
}

