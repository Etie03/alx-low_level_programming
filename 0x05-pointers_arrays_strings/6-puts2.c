#include "main.h"
/**
 * puts2 -  function prints every other character of a string
 * @str: The input
 * Return: print
 */

void puts2(char *str)
{
int lenl = 0;
int j = 0;
char *m = str;
int n;

while (*m != '\0')
{
m++;
lenl++;
}
j = lenl - 1;
for (n = 0; n <= j; n++)
{
if (n % 2 == 0)
{
_putchar(str[n]);
}
}
_putchar('\n');
}
