#include "search_algos.h"

/**
 * advanced_binary - Calls advbinary_help func
 * @array: List of ints
 * @size: Size of array
 * @value: Value to find
 * Return: Index where value was found in array
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (advbinary_help(array, 0, size - 1, value));
}

/**
 * advbinary_help - Searches for a value in an array of integers
 * using the advanced Binary search algorithm
 * @array: List of ints
 * @lt: Left size of array
 * @rt: Right size of array
 * @value: Value to find
 * Return: Index where value was found in array
 */
int advbinary_help(int *array, size_t lt, size_t rt, int value)
{
	size_t mid, i;

	if (rt >= lt)
	{
		printf("Searching in array: ");
		for (i = lt; i <= rt; i++)
		{
			printf("%d", array[i]);
			if (i < rt)
				printf(", ");
		}
		printf("\n");

		mid = lt + (rt - lt) / 2;
		if (lt == rt && array[lt] == value)
			return (lt);
		if (array[mid] >= value)
			return (advbinary_help(array, lt, mid, value));
		return (advbinary_help(array, mid + 1, rt, value));
	}
	return (-1);
}
