#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Searches for a value in an array of integers
 * using the Jump search algorithm
 * @array: List of ints
 * @size: Size of array
 * @value: Value to find
 * Return: Index where value was found in array
 */
int jump_search(int *array, size_t size, int value)
{
	size_t sq, step;

	if (!array)
		return (-1);

	sq = sqrt(size);
	for (step = 0; step < size && array[step] < value; step += sq)
		printf("Value checked array[%ld] = [%d]\n", step, array[step]);

	printf("Value found between indexes [%ld] and [%ld]\n", step - sq, step);

	for (step = step - sq; step < size && array[step] <= value; step++)
	{
		printf("Value checked array[%ld] = [%d]\n", step, array[step]);
		if (array[step] == value)
			return (step);
	}
	return (-1);
}
