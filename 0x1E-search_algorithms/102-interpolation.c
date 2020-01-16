#include "search_algos.h"


/**
 * interpolation_search - Searches for a value in an array of integers
 * using the interpolation search algorithm
 * @array: List of ints
 * @size: Size of array
 * @value: Value to find
 * Return: Index where value was found in array
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t lo, hi, pos;

	if (!array)
		return (-1);

	lo = 0;
	hi = size - 1;

	while (lo <= hi)
	{
		if (lo == hi)
		{
			if (array[lo] == value)
				return (lo);
			return (-1);
		}

		pos = lo + (((double)(hi - lo) /
		(array[hi] - array[lo])) * (value - array[lo]));

		if (pos > size)
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			return (-1);
		}

		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);

		if (array[pos] < value)
			lo = pos++;
		else
			hi = pos--;
	}
	return (-1);
}
