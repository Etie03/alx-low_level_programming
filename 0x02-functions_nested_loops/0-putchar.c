#include "main.h"
/**
 * main - This program program that prints _putchar
 *
 * Return: it should return 0
 */

int main(void)
{
char d[] = "_putchar";
int g;
g = 0;

while (d[g])
{
_putchar (d[g]);
g++;
}
_putchar ('\n');
return (0);
}

