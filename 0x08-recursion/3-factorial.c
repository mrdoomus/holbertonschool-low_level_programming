#include "holberton.h"

/**
 * factorial - returns the factorial of a given number.
 *
 * @n: is a pointer to an int.
 *
 * Return: Returns the result.
 *
**/

int factorial(int n)
{

if (n > 0)
return (n * factorial(n - 1));
else if (n == 0)
return (1);
else if (n < 0)
return (-1);

return (0);
}
