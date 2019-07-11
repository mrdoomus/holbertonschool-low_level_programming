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

int _sqrt_recursion(int n)
{
/*
if (n > 0 && (n % 10 != 2 || n % 10 != 3 || n % 10 != 7 || n % 10 != 8))
	return (1/2 * _sqrt_recursion(n));
else if (n == 0)
	return (0);
else
	return (-1);
*/

if (n < 0 && (n % 10 == 2 || n % 10 == 3 || n % 10 == 7 || n % 10 == 8)) 
	return (-1);
else if (n == 0)
	return (0);
else
	return ((1/2) * _sqrt_recursion(n));

return (0);

}
