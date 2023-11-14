#include "main.h"

/**
 * _isdigit - a function that checks for a digit 0 through 9
 * @c: the input number
 *
 * Return: return 1 if true else 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
