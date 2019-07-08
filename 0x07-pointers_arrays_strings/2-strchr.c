#include "holberton.h"

/**
 * _memcpy - This function fills memory with a constant byte
 *
 * @dest: is a pointer to a char
 * @src: is a pointer to a char
 * @n: is an unsigned int
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
		return (s + i);
i++;
}

return (s = 0);

}
