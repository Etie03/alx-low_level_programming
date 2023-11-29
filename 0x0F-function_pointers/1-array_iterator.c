#include "function_pointers.h"

/**
 * array_iterator - the function that executes a function
 * given as a parameter on each element of an array
 * @array: the array
 * @size: size of the array
 * @action: the function pointer
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t m;

if (array == NULL || size == 0 || action == NULL)

for (m = 0; m < size; m++)
{
action(array[m]);
}
