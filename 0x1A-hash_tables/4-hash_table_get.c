#include "hash_tables.h"

/**
 * hash_table_get - Get the value from a hash table
 *
 * @ht: Hash table to search into. (hash_table_t *)
 *
 * @key: Key you are looking for. (char *)
 *
 * Return: The value founded by key, NULL otherwise.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (!ht || !key || !*key)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	while (node)
	{
		if (!strcmp(node->key, key))
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
