#include "holberton.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring.
 *
 * @s: is a pointer to a char
 * @accept: is a pointer to a char
 *
 * Return: Returns the transformed pointer
 *
**/

void print_diagsums(int *a, int size)
{
int i, j;

for (i = 0; i < size; i++)
{
	for (j = 0; j < size; j++)
	{
		if (a[i] == a[j])
			printf("%d, ", (a[i] + a[j]));
	}
}
printf("\n");
}
