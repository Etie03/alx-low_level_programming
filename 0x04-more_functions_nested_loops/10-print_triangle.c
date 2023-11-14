#include "main.h"

/**
 * print_triangle - a function that prints a triangle
 * @size: the size of the triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int m = 0;
	int p;
	int q;

	if (m > 0)
	{
		while (m < size)
		{
			for (p = size - 1; p > m; p--)
			{
				_putchar(' ');
			}
			for (q = 0; q < m + 1; q++)
			{
				_putchar('#');
			}
			_putchar('\n');
			m++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
