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

char *_strncat(char *dest, char *src, int n)
{
int i = _strlen(dest), j;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}

	dest[i + j] = '\0';

return (dest);
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
