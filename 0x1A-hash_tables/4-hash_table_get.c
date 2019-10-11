#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key
 * @ht: Hash table to look in
 * @key: Key to look for
 * Return: Value associated with the key
**/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp;

	if (ht == NULL || key == NULL)
		return (NULL);

	unsigned long int index = key_index((unsigned char *)key, ht->size);

	if (ht->array[index])
	{
		tmp = ht->array[index];
		while (tmp)
		{
			if (!strcmp(tmp->key, key))
				return (tmp->value);
			tmp = tmp->next;
		}
	}
	return (NULL);
}
