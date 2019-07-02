#include "holberton.h"

/**
 * puts_half - Swaps integers wih pointers.
 *
 * @str: is a pointer to a char
 *
 * Return: Always 0.
 */

void puts_half(char *str)
{
int i, j;

	while (*(str + i) != '\0')
	i++;

	if (i % 2 !=0)
		for (j = ((i - 1) / 2); j <= i; j++)
			_putchar(*(str + j));
	else
		for (j = (i / 2); j <= i; j++)
			_putchar(*(str + j));
_putchar('\n');
}
