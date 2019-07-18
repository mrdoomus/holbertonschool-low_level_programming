#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Function that allocates memory.
 *
 * @b: size to be allocated.
 *
 * Return: Returns nothing.
**/
void *malloc_checked(unsigned int b)
{
void *ptr;

ptr = malloc(b);

if (ptr == NULL)
	exit(98);

return (ptr);
}
