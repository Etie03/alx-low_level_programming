#include "main.h"
#include <stdlib.h>
/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array
 * @c: the char that will contain the array
 *
 * Return: the filled array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int m;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (m = 0; m < size; m++)
	{
		s[m] = c;
	}

	return (s);
}
