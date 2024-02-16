#include "hash_tables.h"

/**
  * hash_table_create - Creates a hash table
  * @size: Size of the array
  *
  * Return: A pointer to the newly created hash table
  */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *htab;

	if (!size)
		return (NULL);

	htab = calloc(1, sizeof(hash_table_t));
	if (!htab)
		return (NULL);
	htab->size = size;
	htab->array = calloc(size, sizeof(hash_node_t *));
	if (!htab->array)
	{
		free(htab);
		return (NULL);
	}
	return (htab);
}
