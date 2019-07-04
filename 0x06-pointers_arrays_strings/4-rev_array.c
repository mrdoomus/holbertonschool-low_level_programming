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
int i = 0, j = (n - 1), k;

	while (i <= n)
	{
		buff[i] = a[j];
		i++;
		j--;
	}
	for (k = 0; k <= n; k++)
	{
		a[k] = buff[k];
	}
}
