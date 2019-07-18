#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - Reallocates memory for an array.
 *
 * @ptr: Size of the array.
 * @old_size: Old size of a pointer to array.
 * @new_size: New size of a pointer to array.
 *
 * Return: Returns a pointer.
**/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
unsigned int i;
void *new_ptr;
char *pnew_ptr, *pold_ptr;

if (ptr == NULL)
{
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
}

if (new_size == 0 && ptr != NULL)
{
	free(ptr);
	return (NULL);
}

if (new_size == old_size)
	return (ptr);

if (new_size > old_size)
{
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	pnew_ptr = (char *)new_ptr;
	pold_ptr = (char *)ptr;
	for (i = 0; i < old_size; i++)
		pnew_ptr[i] = pold_ptr[i];
}

return (pnew_ptr);
}
