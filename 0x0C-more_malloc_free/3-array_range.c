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
int *ptr;

if (min > max)
	return (NULL);

ptr = malloc(max * sizeof(int));

if (ptr == NULL)
	return (NULL);
else
{
	for (min = min; min <= max; min++)
		ptr[min] = min;
}

return (ptr);
}
