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
int sz;
int *ptr;

if (min > max)
	return (NULL);
sz = ((max - min) + 1);

ptr = malloc(sz * sizeof(int));

if (ptr == NULL)
	return (NULL);

else
{
	for (i = 0; i < sz; i++)
	{
		ptr[i] = min;
		min++;
	}

return (ptr);
}
}
