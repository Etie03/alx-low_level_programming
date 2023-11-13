#include "main.h"
/**
 * _memset - a function that fills a block of memory with a specific value
 * @s: starting address of memory to be filled
 * @b: desired value
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value
 */
char *_memset(char *s, char b, unsigned int n)
{
int g = 0;

for (; n > 0; g++)
{
s[g] = b;
n--;
}
return (s);
}

