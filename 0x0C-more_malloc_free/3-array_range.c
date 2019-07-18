#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Creates an array of integers.
 *
 * @min: Min number of the array.
 * @max: Max number of the array.
 *
 * Return: Returns a pointer.
**/

int *array_range(int min, int max)
{
int i;
int *ptr;

if (min > max)
	return (NULL);

ptr = malloc(((max - min) + 1) * sizeof(int));

if (ptr == NULL)
	return (NULL);
else
{
	for (i = 0; i < ((max - min) + 1); i++)
	{
		ptr[i] = min;
		min++;
	}
}

return (ptr);
}
