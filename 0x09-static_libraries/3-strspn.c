#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: input character
 * @accept: input character
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int n = 0;
int h;

while (*s)
{
for (h = 0; accept[h]; h++)
{
if (*s == accept[h])
{
n++;
break;
}
else if (accept[h + 1] == '\0')
return (n);
}
s++;
}
return (n);
}
