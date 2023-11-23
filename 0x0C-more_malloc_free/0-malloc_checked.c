#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - a function that allocates memory
 * @b: the size
 *
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *point;

	point = malloc(b);
	if (point == NULL)
		exit(98);
	return (point);
}
