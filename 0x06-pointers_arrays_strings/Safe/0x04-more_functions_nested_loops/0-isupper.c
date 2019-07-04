#include "holberton.h"

/**
 * _isupper - Entry point
 *
 * Return: Always 0 (Success)
 */

int _isupper(int c)
{
if (c >= 97 && c <= 122)
return (0);
if (c >= 65 && c <= 90)
return (1);

return (0);
}
