#include "holberton.h"

/**
 * _strstr - locates a substring.
 *
 * @haystack: is a pointer to a char
 * @needle: is a pointer to a char
 *
 * Return: Returns the transformed pointer
 *
**/

char *_strstr(char *haystack, char *needle)
{
int i;

	for (i = 0; haystack[i]; i++)
		if (haystack[i] == needle[0])
			return (haystack = (haystack + i));

if (haystack[i] == needle[0])
	return (haystack = (haystack + i));

return (0);
}
