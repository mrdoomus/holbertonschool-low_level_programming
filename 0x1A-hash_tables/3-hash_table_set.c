#include "hash_tables.h"

/**
 * hash_table_t - Adds an element to the hash table
 * @ht: Hash table being set
 * @key: Is the key, can't be empty
 * @value: Value associated with the key, must be duplicated, can be empty
 * Return: 1 if succeeded, 0 otherwise
**/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	unsigned long int index = key_index((unsigned char *)key, ht->size);

	/*If array in that index is empty, then add the node as head*/
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
	/*If the array in that index is full,*/
       /*then point the node to head and then move head to node*/
	else
	{
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
