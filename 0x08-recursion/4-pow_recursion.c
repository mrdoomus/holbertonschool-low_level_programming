#include "holberton.h"

/**
 * _pow_recursion - returns the factorial of a given number.
 *
 * @x: is a pointer to an int.
 * @y: is a pointer to an int.
 *
 * Return: Returns the result.
 *
**/

int _pow_recursion(int x, int y)
{

if (y == 0 || x == 1)
	return (1);
else if (y == 1)
	return (x);
else if (y > 0)
	return (x * _pow_recursion(x, y - 1));
else
	return (-1);

return (0);

}
