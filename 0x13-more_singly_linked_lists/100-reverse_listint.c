#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - function to reverse lists
 * @head: Pointer to a pointer pointing to a struct
 * Return: Returns a pointer to the first node of the reversed list
**/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp = (*head)->next, *next;

	if (head == NULL)
		return (NULL);

	(*head)->next = NULL;
	while (tmp != NULL)
	{
		next = tmp->next;
		tmp->next = *head;
		*head = tmp;
		tmp = next;
	}

	return (tmp);
}
