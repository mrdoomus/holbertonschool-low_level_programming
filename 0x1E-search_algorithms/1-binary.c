#include "search_algos.h"

/**
 * binary_search - Calls binary_help func
 * @array: List of ints
 * @size: Size of array
 * @value: Value to find
 * Return: Index where value was found in array
 */
int binary_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (binary_help(array, 0, size - 1, value));
}

/**
 * binary_help - Searches for a value in an array of integers
 * using the Binary search algorithm
 * @array: List of ints
 * @lt: Left size of array
 * @rt: Right size of array
 * @value: Value to find
 * Return: Index where value was found in array
 */
int binary_help(int *array, size_t lt, size_t rt, int value)
{
	size_t mid, i;

	printf("Searching in array: ");
	for (i = lt; i <= rt; i++)
	{
		printf("%d", array[i]);
		if (i < rt)
			printf(", ");
	}
	printf("\n");

	if (rt == lt && array[rt] != value)
		return (-1);
	if (rt >= lt)
	{
	mid = lt + (rt - lt) / 2;

	if (array[mid] == value)
		return (mid);
	if (array[mid] > value)
		return (binary_help(array, lt, mid - 1, value));
	return (binary_help(array, mid + 1, rt, value));
	}
	return (-1);
}
