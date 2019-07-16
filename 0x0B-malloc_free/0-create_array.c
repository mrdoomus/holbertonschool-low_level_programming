#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creates an array of cars, initialized on a char
 *
 * @size: size of the array.
 * @c: Initializing char.
 *
 * Return: Returns the created array.
**/

char *create_array(unsigned int size, char c)
{

unsigned int i;
char *ar = malloc(size * sizeof(c));

if (size == 0)
	return (NULL);

	if (ar != NULL)
	{
		for (i = 0; i < size; i++)
			ar[i] = c;

		return (ar);
	}
	else
		return (NULL);

}

