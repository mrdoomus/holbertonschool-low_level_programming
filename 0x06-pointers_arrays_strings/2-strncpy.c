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

char *_strncpy(char *dest, char *src, int n)
{
int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (i = i; i < n; i++)
		dest[i] = '\0';

return (dest);
}
