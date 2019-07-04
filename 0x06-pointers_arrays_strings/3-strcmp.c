#include "holberton.h"

/**
 * _strlen - Swaps integers wih pointers.
 *
 * _strcat
 *
 * @i: is a pointer to a char
 *
 * Return: Always 0.
 */

int _strlen(char *s);

int _strcmp(char *s1, char *s2)
{
int size1 = _strlen(s1), size2 = _strlen(s2);

	if (size1 < size2)
		return (-15);
	else if (size1 > size2)
		return (15);
	else
		return (0);
}

int _strlen(char *s)
{
int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}

return (i);
}
