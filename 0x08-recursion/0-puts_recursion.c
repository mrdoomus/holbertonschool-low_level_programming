#include "holberton.h"

/**
 * _puts_recursion - prints a string, followed by a new line.
 *
 * @s: is a pointer to a char array
 *
 * Return: Returns the transformed pointer
 *
**/

void _puts_recursion(char *s)
{

if (*s == 0)
{
_putchar('\n');
return;
}

_putchar(*s);
s++;
_puts_recursion(s);

}
