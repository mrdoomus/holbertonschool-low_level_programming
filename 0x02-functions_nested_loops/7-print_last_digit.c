#include "holberton.h"

/**
 * print_last_digit - int c
 *
 * @c: c is a variable name
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int c)
{
if (c < 0)
{
c = -c;
_putchar((c % 10) + '0');
return (c % 10);
}
else
{
_putchar((c % 10) + '0');
return (c % 10);
}
}
