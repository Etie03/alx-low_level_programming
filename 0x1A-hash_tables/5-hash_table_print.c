#include "hash_tables.h"

/**
  * hash_table_print - Prints a hash table
  * @ht: The hash table to prints
  *
  * Return: Nothing!
  */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long i = 0;
	size_t prints = 0;
	hash_node_t *node;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			if (prints)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			prints++;
			node = node->next;
		}
	}

	printf("}\n");
}

