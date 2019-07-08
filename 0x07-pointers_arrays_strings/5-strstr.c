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

char *_strstr(char *haystack, char *needle)
{
int i;

	for (i = 0; haystack[i]; i++)
		if (haystack[i] == needle[0])
			return(haystack + i);

return (haystack + i);
}
