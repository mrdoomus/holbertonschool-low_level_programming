#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Frees a list and sets head to NULL
 * @head: pointer to a struc
 * Return: Returns nothing
**/
void free_listint2(listint_t **head)
{
listint_t *tmp;

	while (*head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}

*head = NULL;
return (NULL);
}
