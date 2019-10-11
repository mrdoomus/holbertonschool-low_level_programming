#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: Hash table being set
 * @key: Is the key, can't be empty
 * @value: Value associated with the key, must be duplicated, can be empty
 * Return: 1 if succeeded, 0 otherwise
**/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node, *tmp;
	unsigned long int index;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
	{
		node = malloc(sizeof(hash_node_t));
		if (node == NULL)
			return (0);
		node->key = strdup(key);
		node->value = strdup(value);
		node->next = NULL;
		ht->array[index] = node;
	}
	else
	{
		tmp = ht->array[index];
		while (tmp != NULL)
		{
			if (!strcmp(ht->array[index]->key, key))
			{
				free(ht->array[index]->value);
				ht->array[index]->value = strdup(value);
				return (1);
			}
			tmp = tmp->next;
		}
		node = malloc(sizeof(hash_node_t));
		if (node == NULL)
			return (0);
		node->key = strdup(key);
		node->value = strdup(value);
		node->next = ht->array[index];
		ht->array[index] = node;
	}
	return (1);
}
