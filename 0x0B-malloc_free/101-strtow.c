#include <stdlib.h>
#include "main.h"

/**
 * count_word - a function that Counts words in a string based on spaces
 * @s: The string to be counted
 *
 * Return: The number of words of the string
 */

int count_word(char *s)
{
int flag, m, p;

flag = 0;
p = 0;

for (m = 0; s[m] != '\0'; m++)
{
if (s[m] == ' ')
flag = 0;
else if (flag == 0)
{
flag = 1;
p++;
}
}

return (p);
}
/**
 * strtow - a function that splits a string into words
 * @str: The string
 *
 * Return: a pointer to an array of strings else NULL
 */

char **strtow(char *str)
{
char **matrix, *tmp;
int i, k = 0, len = 0, words, c = 0, start, end;

while (*(str + len))
len++;
words = count_word(str);
if (words == 0)
return (NULL);

matrix = (char **) malloc(sizeof(char *) * (words + 1));
if (matrix == NULL)
return (NULL);

for (i = 0; i <= len; i++)
{
if (str[i] == ' ' || str[i] == '\0')
{
if (c)
{
end = i;
tmp = (char *) malloc(sizeof(char) * (c + 1));
if (tmp == NULL)
return (NULL);
while (start < end)
*tmp++ = str[start++];
*tmp = '\0';
matrix[k] = tmp - c;
k++;
c = 0;
}
}
else if (c++ == 0)
start = i;
}

matrix[k] = NULL;

return (matrix);
}
