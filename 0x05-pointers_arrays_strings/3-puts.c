#include "holberton.h"

/**
 * _puts - Swaps integers wih pointers.
 *
 * @*str: is a pointer to a char
 *
 * Return: Always 0.
 */

void _puts(char *str)
{

while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
