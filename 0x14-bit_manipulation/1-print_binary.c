#include "holberton.h"

/**
 * print_binary - Converts an int to binary
 * @n: Passed int to binary
 * Return: Returns nothing
**/
void print_binary(unsigned long int n)
{
	int i = 0;

	if (n == 0)
		_putchar('0');

	while (n >> i)
		i++;

	for (i = i - 1; i >= 0; i--)
	{
		int num = n >> i;

		if (num & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
