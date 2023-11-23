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
	unsigned int *m;

	m = malloc(b);
	if (m == NULL)
		exit(98);
	return (m);
}
