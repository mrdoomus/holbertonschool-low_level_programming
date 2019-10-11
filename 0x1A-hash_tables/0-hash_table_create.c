#include "hash_tables.h"

/**
 * hash_table_create - Creates hash table
 * @size: the size of the array
 * Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_ht = NULL;

	if (size == 0)
		return (NULL);

	new_ht = malloc(sizeof(hash_table_t));
	if (new_ht == NULL)
		return (NULL);

	new_ht->array = calloc(size, sizeof(hash_node_t *));
	if (new_ht->array == NULL)
	{
		free(new_ht);
		return (NULL);
	}
	new_ht->size = size;

	return (new_ht);
}
