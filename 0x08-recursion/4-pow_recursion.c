#include "main.h"

/**
 * _pow_recursion - a function that returns
 * the value of x raised to the power of y
 * @x:the number to be multiplied
 * @y:the number of times to multiply the number
 *
 * Return: solution
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	if (y > 0)
		--y;
	return (_pow_recursion(x, y) * x);
}
