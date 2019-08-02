#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees memory space of a list
 * @head: Pointer to a struct pointer
 * Return: Returns amount of node
**/

void free_list(list_t *head)
{
list_t *tmp = head;

while (head != NULL)
{
	free(head->str);
	free(tmp);
	head = head->next;
}

}
