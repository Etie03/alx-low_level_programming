#include "main.h"
/**
 * puts_half - This function prints half of a string
 * if odd len, i = (length_of_the_string - 1) / 2
 * @str: The input
 *
 * Return: returns half of the input
 */

void puts_half(char *str)
{
int h, i, lenj;

lenj = 0;

for (h = 0; str[h] != '\0'; h++)
{
lenj++;

i = (lenj / 2);

if ((lenj % 2) == 1)
{
i = ((lenj + 1) / 2);
}
}

for (h = i; str[h] != '\0'; h++)
{
_putchar(str[h]);
}
_putchar('\n');
}
