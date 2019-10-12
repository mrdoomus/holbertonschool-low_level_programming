#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key
 * @ht: Hash table to look in
 * @key: Key to look for
 * Return: Value associated with the key
**/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	if (ht->array[index])
	{
	node = ht->array[index];
		while (node)
		{
			if (!strcmp(node->key, key))
				return (node->value);
		node = node->next;
		}
	}
	return (NULL);
}
