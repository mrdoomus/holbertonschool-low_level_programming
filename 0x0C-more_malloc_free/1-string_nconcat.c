#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - Calculates length of a string
 *
 * @s: is a pointer to a char
 *
 * Return: Always 0
**/

int _strlen(char *s)
{
int i = 0;

while (*(s + i) != '\0')
	i++;

return (i);
}

/**
 * string_nconcat - Concatenates two strings.
 *
 * @s1: String No. 1
 * @s2: String No. 2
 * @n: Number of bytes.
 *
 * Return: Returns a char.
**/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j, size1 = 0, size2 = 0, totSize = 0;
char *ptr;

if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";

size2 = _strlen(s2);
size1 = _strlen(s1);
totSize = (size1 + size2) +1;

ptr = malloc(totSize *sizeof(char));

if (ptr == NULL)
	return (NULL);
else
{
	for (i = 0; i < size1; i++)
		ptr[i] = s1[i];

	if (n >= size2)
	{
		for (j = 0; j < size2; j++)
		{
			ptr[i] = s2[j];
			i++;
		}
	}
	else
	{
		for (j = 0; j < n; j++)
		{
			ptr[i] = s2[j];
			i++;
		}
	}
}
ptr[i + 1] = '\0';
return (ptr);
}
