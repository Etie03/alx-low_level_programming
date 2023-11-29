#include <stdio.h>
#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - a function that selects the operation asked by the user.
 * @s: the operator
 *
 * Return: solution
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int m = 0;

	while (m < 5)
	{
		if (!(strcmp(ops[m].op, s)))
			return (ops[m].f);
		m++;
	}
	return (NULL);
}
