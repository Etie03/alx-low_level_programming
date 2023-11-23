#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - a function that concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * @n: number of byte
 *
 * Return: A pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int m = 0, p = 0, g;
	char *point;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[m])
	{
		m++;
	}
	while (s2[p])
	{
		p++;
	}
	if (n >= p)
		n = p;
	p = 0;
	point = malloc(sizeof(char) * (m + n + 1));
	if (point == NULL)
		return (NULL);
	for (g = 0; g < m; g++)
	{
		point[g] = s1[g];
	}
	for (; g < (m + n); g++)
	{
		point[g] = s2[g - m];
	}
	point[g] = '\0';
	return (point);
}
