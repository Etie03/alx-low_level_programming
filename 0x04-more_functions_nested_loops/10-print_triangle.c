#include "main.h"

/**
 * print_triangle - a function that prints a triangle
 * @size: the size of the triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int m;
	int p;
	int q;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (m = 0; m < size; m++)
		{
			for (p = size - m; p > 1; p--)
			{
				_putchar(32);
			}

			for (q = 0; q <= m; q++)
			{
				_putchar(35);
			}

			_putchar('\n');
		}
	}
}
