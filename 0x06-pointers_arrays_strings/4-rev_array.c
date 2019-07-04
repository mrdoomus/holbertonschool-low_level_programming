#include "holberton.h"

/**
 * reverse_array - Swaps integers wih pointers.
 *
 * @a: is a pointer to an int.
 * @n: is an int..
 *
 * Return: Always 0.
 */

void reverse_array(int *a, int n)
{
int buff[1000];
int i = 0, j = n, k;

	while (j != 0)
	{
		buff[i] = a[i];
		j--;
		i++;
	}
	for (k = 0; k <= n; k++)
	{
		i--;
		a[k] = buff[i];
	}
}
