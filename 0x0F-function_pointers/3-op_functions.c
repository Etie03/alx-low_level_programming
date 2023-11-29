#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add - a function that return sum a + b
 * @a: first value
 * @b: second value
 *
 * Return: solution
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - a function that return sub a - b
 * @a: first value
 * @b: second value
 *
 * Return: solution
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - a function that return mul a * b
 * @a: first value
 * @b: second value
 *
 * Return: solution
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - a function that return div a / b
 * @a: first value
 * @b: second value
 *
 * Return: solution
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - a function that return mod a % b
 * @a: first value
 * @b: second value
 *
 * Return: solution
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
