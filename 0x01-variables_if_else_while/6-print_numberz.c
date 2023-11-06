#include <stdio.h>
/**
 * main - This  program prints all single digit numbers of base 10
 *
 * Return: it returns 0
 */

int main(void)
{
int a;
a = 0;
while (a < 10)
{
putchar (a + '0');
a++;
}
putchar('\n');
return (0);
}
