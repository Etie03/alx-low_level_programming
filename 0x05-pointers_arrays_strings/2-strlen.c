#include "main.h"
/**
 * _strlen - This function returns the length of a string
 * @s: string
 *
 * Return: returrn the length
 */
int _strlen(char *s)
{
int lend = 0;
while (*s != '\0')
{
lend++;
s++;
}
return (lend);
