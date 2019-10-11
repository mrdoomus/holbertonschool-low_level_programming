#include "hash_tables.h"

/**
 * key_index - Gives the index of a key
 * @key: Key
 * @size: Size of the hash map
 * Return: Index of a key
**/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (key == NULL)
		return (0);
	if (size == 0)
		return (0);
	return (hash_djb2(key) % size);
}
