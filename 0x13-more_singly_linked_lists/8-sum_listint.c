#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - Deletes the head node and returns the head node's data
 * @head: pointer to a struc
 * Return: Returns nothing
**/
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
