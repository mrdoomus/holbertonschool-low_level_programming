#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring.
 *
 * @s: is a pointer to a char
 * @accept: is a pointer to a char
 *
 * Return: Returns the transformed pointer
 *
**/

char *_strpbrk(char *s, char *accept)
{
int i, j;

	for (i = 0; s[i]; i++)
		for (j = 0; accept[j]; j++)
				if (s[i] == accept[j])
					return (s + i);

return (s + i);
}
