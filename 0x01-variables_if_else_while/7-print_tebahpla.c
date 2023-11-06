#include <stdio.h>
/**
 * main - This  program prints the lowercase alphabet in reverse
 *
 * Return: it should return 0
 */

int main(void)
{
char lowercase = 'z';
while (lowercase >= 'a')
{
putchar(lowercase);
lowercase--;
}
putchar('\n');
return (0);
}
