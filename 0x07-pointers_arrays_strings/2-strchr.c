#include "holberton.h"

/**
 * _strchr - lLocates a character in a string.
 *
 * @s: is a pointer to a char
 * @c: is a pointer to a char
 *
 * Return: Returns the transformed pointer
 *
**/

char *_strchr(char *s, char c)
{
int i = 0;

	while (s[i])
	{
		if (s[i] == c)
			break;
	i++;
	}

return (s + i);
}
