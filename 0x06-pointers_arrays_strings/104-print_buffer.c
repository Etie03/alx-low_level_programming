#include "main.h"
#include <stdio.h>

/**
 * print_buffer - To prints buffer
 * @b: buffer
 * @size: size
 * Return: void
 */

void print_buffer(char *b, int size)
{
int d, h, i;

d = 0;

if (size <= 0)
{
printf("\n");
return;
}
while (d < size)
{
h = size - d < 10 ? size - d : 10;
printf("%08x: ", d);
for (i = 0; i < 10; i++)
{
if (i < h)
printf("%02x", *(b + d + i));
else
printf("  ");
if (i % 2)
{
printf(" ");
}
}
for (i = 0; i < j; i++)
{
int f = *(b + d + i);

if (f < 32 || f > 132)
{
f = '.';
}
printf("%c", c);
}
printf("\n");
d += 10;
}
}

