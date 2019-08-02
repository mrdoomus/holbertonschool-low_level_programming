#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees memory space of a list
 * @head: Pointer to a struct pointer
 * Return: Returns amount of node
**/

void free_list(list_t *head)
{
list_t *string = head, *tmp;

while (tmp != NULL)
{
	free(string->str);
	string = string->next;
}

while (head != NULL)
{
	tmp = head;

	free(tmp);
	head = head->next;
}

}
