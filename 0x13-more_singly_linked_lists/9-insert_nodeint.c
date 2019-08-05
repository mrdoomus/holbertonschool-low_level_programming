#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - 
 * @idx:
 * @n:
 * Return:
**/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *previousNode, *nextNode, *startNode = *head;
	unsigned int i;

	if (*head == NULL)
		return (NULL);

	for (i = 0; i < idx - 1; i++)
		*head = (*head)->next;
	previousNode = *head;

	*head = startNode;
	for (i = 0; i < idx; i++)
		*head = (*head)->next;
	nextNode = *head;

	newNode = malloc(sizeof(newNode));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	previousNode->next = newNode;
	newNode->next = nextNode;
	startNode = newNode;

	return (newNode);
}
