#include "holberton.h"

/**
 * puts2 - Swaps integers wih pointers.
 *
 * @str: is a pointer to a char
 *
 * Return: Always 0.
 */

void puts2(char *str)
{
int i, j;

	while (*(str + i) != '\0')
	{
		i++;
	}

	for (j = 0; j <= i; j += 2)
	{
		_putchar(*(str + j));
	}

_putchar('\n');
}
