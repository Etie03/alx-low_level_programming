#include <stdio.h>
/**
 * main - This program prints all the numbers of base 16
 *
 * Return: it will return 0
 */

int main(void)
{
char m = 'a';
int n = 0;

while (n < 10)
{
putchar(n + '0');
n++;
}
while (m <= 'f')
{
putchar(m);
m++;
}
putchar('\n');
return (0);
}
