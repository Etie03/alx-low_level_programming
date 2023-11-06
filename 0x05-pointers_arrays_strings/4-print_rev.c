#include "main.h"
/**
 * print_rev - This function prints a string in reverse
 * @s: The string
 *
 * Return: 0
 */

void print_rev(char *s)
{
int longt = 0;
int b;

while (*s != '\0')
{
longt++;
s++;
}

s--;
for (b = longt; b > 0; b--)
{
putchar(*s);
s--;
}
putchar('\n');
}

