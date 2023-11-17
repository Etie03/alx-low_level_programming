#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: the memory where it is stored
 * @src: the memory where it is copied
 * *@n: number of bytes
 *
 * Return: copied memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
int g = 0;
int h = n;

for (; g < h; g++)
{
dest[g] = src[g];
n--;
}
return (dest);
}
