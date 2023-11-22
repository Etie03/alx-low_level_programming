#include <stdlib.h>

/**
 * count_words - a function that Counts words in a string based on spaces
 * @str: The string to be counted
 *
 * Return: The number of words of the string else 0
 */
int count_words(char *str)
{
	int m = 0, n = 0;

	for (m = 0; str[m] != '\0'; m++)
		if (str[m] == 32)
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
	int m = 0, f = 0, k = 0, n = 0;
	char **res;

	n = count_words(str);
	res = malloc(n * sizeof(char *));
	if (res != NULL)
	{
		for (m = 0; m < n; m++)
		{
			n = 0;
			while (str[f++] != 32)
				n++;
			f++;
			res[m] = malloc((n + 1) * sizeof(char));
			if (res[m] != NULL)
			{
				for (k = 0; k < n; k++)
					res[m][k] = str[f - n - 1 + k];
				res[m][k] = '\0';
			}
		}
	}
	return (res);
}
