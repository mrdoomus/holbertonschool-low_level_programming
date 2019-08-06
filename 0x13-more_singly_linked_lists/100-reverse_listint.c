#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - function to reverse lists
 * @head: Pointer to a pointer pointing to a struct
 * Return: Returns a pointer to the first node of the reversed list
**/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next;
	
	if (head == NULL)
		return (NULL);

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;

	return (*head);
}
