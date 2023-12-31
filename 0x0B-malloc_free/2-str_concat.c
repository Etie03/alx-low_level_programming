#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: the result
 */

char *str_concat(char *s1, char *s2)
{
	int m = 0, p = 0, k = 0, l = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[m])
		m++;

	while (s2[p])
		p++;

	l = m + p;
	s = malloc((sizeof(char) * l) + 1);

	if (s == NULL)
		return (NULL);

	p = 0;

	while (k < l)
	{
		if (k <= m)
			s[k] = s1[k];

		if (k >= m)
		{
			s[k] = s2[p];
			p++;
		}

		k++;
	}

	s[k] = '\0';
	return (s);
}
