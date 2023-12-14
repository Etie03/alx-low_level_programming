#include "main.h"

/**
 * get_endianness - a function that checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int m;
	char *g;

	m = 1;
	g = (char *)&m;
	return (*g);
}

