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

	while (*s != '\0')
	{
		/*if (s[i] == c)
			break;*/
		if (*s == c)
			return (s);
	s++;
	}
if (*s == c)
return (s);

return (0);
}
