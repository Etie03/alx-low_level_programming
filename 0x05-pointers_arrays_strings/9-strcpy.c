#include "main.h"

/**
 * *_strcpy - This function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: pointer to the destination string
 */

char *_strcpy(char *dest, char *src)
{
int f = 0;
while (src[f] != '\0')
{
dest[f] = src[f];
f++;
}
dest[f] = '\0';
return (dest);
}
