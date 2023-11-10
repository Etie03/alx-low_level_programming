#include <stdio.h>
/**
 * main -  a program that prints combinations of three digits
 *
 * Return: returns 0
 */

int main(void)
{
int i;

for (i = 12; i <= 789; i++)
{
int m = i / 100;
int n = (i / 10) % 10;
int p = i % 10;

if (m != n && m != p && n != p)
{
putchar('0' + m);
putchar('0' + n);
putchar('0' + p);

if (i != 789)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
