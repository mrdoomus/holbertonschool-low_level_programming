#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a node in a specific position
 * @head: Pointer to a pointer pointing to a struct
 * @idx: Index of the list where the new node should be added
 * @n: value of the int passed to the new node
 * Return: The address of the new node
**/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode;
	unsigned int i = 0;

	if (*head == NULL)
		return (NULL);

	while (*head != NULL)
	{
		if (*head == NULL)
			return (NULL);

		if (idx == i)
		{
			newNode = malloc(sizeof(newNode));
			if (newNode == NULL)
				return (NULL);

			newNode->n = n;
			newNode->next = *head;
			*head = newNode;
		}
		else
			head = &(*head)->next;
	i++;
	}
	return (newNode);
}
