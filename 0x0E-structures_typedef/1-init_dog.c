#include "dog.h"
#include <stdlib.h>

/**
 * init_dog -  Initializes a variable type
 *
 * @d: Pointer to struct
 * @name: Parameter of name
 * @age: Parameter of age
 * @owner: Parameter of owner
 *
 * Return: No return.
**/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

d->name = name;
d->age = age;
d->owner = owner;
}
