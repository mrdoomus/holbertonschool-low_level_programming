#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array.
 *
 * @nmemb: Size of the array.
 * @size: Size of the pointing variable.
 *
 * Return: Returns a pointer..
**/

void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char *ptr;

if (nmemb < 1 || size < 1)
	return (NULL);

ptr = malloc(nmemb * size);

if (ptr == NULL)
	return (NULL);
else
{
	for (i = 0; i < nmemb; i++)
		ptr[i] = 0;
}

return (ptr);
}
