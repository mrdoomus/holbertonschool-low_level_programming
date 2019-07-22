#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - Swaps integers wih pointers.
 *
 * @s: is a pointer to a char
 *
 * Return: Always 0.
 */

int _strlen(char *s)
{
int i;

while (*(s + i) != '\0')
{
i++;
}

return (i);
}

/**
 * _strcpy - Swaps integers wih pointers.
 *
 * @dest: is a pointer to a char
 *
 * @src: is a pointer to a char
 *
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
char buff[1000];
int i = 0, j, pos = 0;

while (*(src + i) != '\0')
{
	buff[i] = *(src + i);
	i++;
}

for (j = 0; *(src + j) != '\0' ; j++)
{
	*(dest + pos) = buff[j];
	pos++;
}
dest[j] = '\0';
return (dest);
}

/**
 * new_dog - Creates function with name and owner copies
 *
 * @name: Name parameter
 * @age: Age parameter
 * @owner: Owner parameter
 *
 * Return: Returns nothing
**/

dog_t *new_dog(char *name, float age, char *owner)
{
char *newName;
char *newOwner;
dog_t *newDog;

newDog = malloc(sizeof(struct dog));

if (newDog == NULL)
	return (NULL);

newName = malloc((_strlen(name) + 1));
if (newName == NULL)
{
	free(newDog);
	return (NULL);
}

newOwner = malloc((_strlen(owner) + 1));
if (newOwner == NULL)
{
	free(newName);
	free(newDog);
	return (NULL);
}

newName = _strcpy(newName, name);
newOwner = _strcpy(newOwner, owner);

newDog->name = newName;
newDog->age = age;
newDog->owner = newOwner;

return (newDog);
}
