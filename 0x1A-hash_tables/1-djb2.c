#include "hash_tables.h"

/**
  * hash_djb2 - A hash function with the djb2 algorithm.
  * @str: The string value
  *
  * Return: A number representing the given string
  */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long hash = 5381;
	int m;

	for (m = *str++; m; m = *str++)
		hash = ((hash << 5) + hash) + m; /* hash * 33 + m */

	return (hash);
}
