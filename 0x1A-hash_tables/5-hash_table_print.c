#include "hash_tables.h"

/**
 * hash_table_get - Prints a hash table.
 * @ht: Hash table to look in
**/

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	char flag = 0;

	if (ht == NULL)
		return;

	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			node = ht->array[i];
			while (node != NULL)
			{
				if (flag == 1)
					printf(", ");
				printf("'%s':'%s'", node->key, node->value);
				flag = 1;
				node = node->next;
			}
		}
	}
	putchar('}');
	putchar('\n');
}
