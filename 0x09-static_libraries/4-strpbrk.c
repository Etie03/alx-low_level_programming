#include "main.h"
/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 * @s: input character
 * @accept: input character
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
int g;

while (*s)
{
for (g = 0; accept[g]; g++)
{
if (*s == accept[g])
return (s);
}
s++;
}
return ('\0');
}
