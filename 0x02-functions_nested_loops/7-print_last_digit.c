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
int abs;
if (c < 0)
{
abs = -c;
_putchar((abs % 10) + '0');
}
else
{
abs = c;
_putchar((abs % 10) + '0');
}
return (abs % 10);
}
