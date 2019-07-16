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
 * str_concat - Concatenates 2 strings..
 *
 * @s1: First string.
 * @s2: Second string.
 *
 * Return: Returns the created array.
**/

char *str_concat(char *s1, char *s2)
{

int i, j;
int size1 = _strlen(s1) + 1;
int size2 = _strlen(s2) + 1;
int totSize = (size1 + size2) - 1;
char *ar;

if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";

ar = malloc(totSize * sizeof(char));

if (ar == NULL)
	return (NULL);
else
{
for (i = 0; i < size1 - 1; i++)
	ar[i] = s1[i];

for (j = 0; j < size2 - 1; j++)
{
	ar[i] = s2[j];
	i++;
}
ar[i + 1] = '\0';
return (ar);
}

}
