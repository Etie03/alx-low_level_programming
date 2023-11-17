#include "main.h"
/**
 * _strstr - a function that locates a substring
 * @haystack: input character
 * @needle: input character
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *m = haystack;
char *n = needle;

while (*m == *n && *n != '\0')
{
m++;
n++;
}

if (*n == '\0')
return (haystack);
}
return (0);
}
