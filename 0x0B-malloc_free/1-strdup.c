#include "main.h"
#include <stdlib.h>
/**
 * _strdup - a function that returns a pointer to
 * a newly allocated space in memory
 * @str: the string
 *
 * Return: pointer of the array
 */

char *_strdup(char *str)
{
	int m = 0, p = 1;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[p])
	{
		p++;
	}

	s = malloc((sizeof(char) * p) + 1);

	if (s == NULL)
		return (NULL);

	while (m < p)
	{
		s[m] = str[m];
		m++;
	}

	s[m] = '\0';
	return (s);
}
