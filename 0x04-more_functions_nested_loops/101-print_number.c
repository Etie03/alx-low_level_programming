#include <stdio.h>
#include "main.h"

/**
  * print_number - a function that prints an integer
  * @n: The integer to prints
  *
  * Return: void
  */

void print_number(int n)
{
	unsigned int p = n;

	if (n < 0)
	{
		n *= -1;
		p = n;
		_putchar('-');
	}

	p /= 10;

	if (p != 0)
		print_number(p);

	_putchar((unsigned int) n % 10 + '0');

}
