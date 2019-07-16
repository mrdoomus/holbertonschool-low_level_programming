#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - Swaps integers wih pointers.
 *
 * @s: is a pointer to a char
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
int i = 0;

while (*(s + i) != '\0')
	i++;

return (i);
}


/**
 * _strdup - Duplicates a givne string into a another.
 *
 * @str: given string..
 *
 * Return: Returns the created array.
**/

char *_strdup(char *str)
{

int i;
int size = _strlen(str) + 1;
char *ar;

if (str == NULL)
	return (NULL);

ar = malloc(size * sizeof(char));

if (ar == NULL)
	return (NULL);
else
{
for (i = 0; i < size; i++)
	ar[i] = str[i];
return (ar);
}

}
