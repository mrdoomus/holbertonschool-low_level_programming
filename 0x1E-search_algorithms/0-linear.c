#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers
 * using the Linear search algorithm
 * @array: List of ints
 * @size: Size of array
 * @value: Value to find
 * Return: Index where value was found in array
 */
int linear_search(int *array, size_t size, int value)
{
	int indx = -1;
	size_t i;

	if (!array)
		return (indx);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			indx = i;
			break;
		}
	}
	return (indx);
}
