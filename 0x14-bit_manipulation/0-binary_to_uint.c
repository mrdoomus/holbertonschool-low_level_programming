#include <stdlib.h>
#include "holberton.h"

/**
 * _strlen - Swaps integers wih pointers.
 * @s: is a pointer to a char
 * Return: Always 0.
 */

int _strlen(const char *s)
{
int i = 0;

while (*(s + i) != '\0')
	i++;

return (i);
}

/**
 * _pow_recursion - returns the powered number
 * @x: is a pointer to an int.
 * @y: is a pointer to an int.
 * Return: Returns the result.
**/

int _pow_recursion(int x, int y)
{

if (y == 0 || x == 1)
	return (1);
else if (y == 1)
	return (x);
else if (y > 0)
	return (x * _pow_recursion(x, y - 1));
else
	return (-1);

return (0);
}

/**
 * binary_to_uint - function that converts binary numbers into unsigned ints
 * @b: Char passed
 * Return: Converted unit
**/
unsigned int binary_to_uint(const char *b)
{
	int size = 0;
	unsigned int sum = 0, i = 0;

	if (b == NULL)
		return (0);

	size = _strlen(b);
	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
		{
			if (b[i] == '1')
				sum += (1 * (_pow_recursion(2, size - 1)));
			else
				sum += (0 * (_pow_recursion(2, size - 1)));
			i++;
			size--;
		}
		else
			return (0);
	}

	return (sum);
}
