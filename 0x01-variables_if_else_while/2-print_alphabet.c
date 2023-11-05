#include <stdio.h>

/**
 * main - A program that prints the alphabet in lowercase
 * Return: 0
 */

int main(void)
{
char c;

c = 'z';
while (c >= 'a')
{
putchar(c);
c--;
}
putchar('\n');
return (0);
}
