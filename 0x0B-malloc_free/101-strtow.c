#include <stdlib.h>

/**
 * count_words - a function that Counts words in a string based on spaces
 * @str: The string to be counted
 *
 * Return: The number of words of the string else 0
 */
int count_words(char *str)
{
	int i = 0, n = 0;

	for (i = 0; str[i] != '\0'; i++)
		if (str[i] == 32)
			n++;
	return (n);
}
/**
 * strtow - a function that splits a string into words
 * @str: The string
 *
 * Return: a pointer to an array of strings
 */

char **strtow(char *str)
{
	int i = 0, j = 0, k = 0, n = 0;
	char **res;

	n = count_words(str);
	res = malloc(n * sizeof(char *));
	if (res != NULL)
	{
		for (i = 0; i < n; i++)
		{
			n = 0;
			while (str[j++] != 32)
				n++;
			j++;
			res[i] = malloc((n + 1) * sizeof(char));
			if (res[i] != NULL)
			{
				for (k = 0; k < n; k++)
					res[i][k] = str[j - n - 1 + k];
				res[i][k] = '\0';
			}
		}
	}
	return (res);
}
