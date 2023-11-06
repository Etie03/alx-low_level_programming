#include <stdio.h>
/**
 * main - This program prints all possible combinations of single-digit numbers
 *
 * Return: it returns 0
 */

int main(void)
{
int c;
for (c = 0; c < 10; c++)
{
putchar(c + '0');
if (c < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
