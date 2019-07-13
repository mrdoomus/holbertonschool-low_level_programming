#include "holberton.h"

/**
 * _islower - returns an int
 *
 * @c: is a variable name
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
else
return (0);
}
