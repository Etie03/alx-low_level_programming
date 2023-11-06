#include "main.h"

/**
 * puts_half - This function prints half of a string
 * if odd len, i = (length_of_the_string - 1) / 2
 * @str: The input
 *
 * Return: None
 */

void puts_half(char *str)
{
int len = 0;
int i;

while (str[len] != '\0')
len++;

i = (len + 1) / 2;

while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
