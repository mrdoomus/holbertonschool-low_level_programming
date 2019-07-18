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

if (new_size == 0 && ptr != NULL)
{
	free(ptr);
	return (NULL);
}

if (new_size == old_size)
	return (ptr);

new_ptr = malloc(new_size);
if (new_ptr == NULL)
	return (NULL);

if (ptr == NULL)
	return (new_ptr);

if (new_size > old_size)
{
	for (i = 0; i < old_size; i++)
		((char *)new_ptr)[i] = ((char *)ptr)[i];
}
else
{
	for (i = 0; i < new_size; i++)
		((char *)new_ptr)[i] = ((char *)ptr)[i];

	free(ptr);
}

free(ptr);
return (new_ptr);
}
