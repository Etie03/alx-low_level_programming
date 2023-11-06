#include <main.h>
/**
 * _puts - This function prints a string
 * @str: string that will be printed
 *
 */

void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str++);
}
_putchar('\n');
}
