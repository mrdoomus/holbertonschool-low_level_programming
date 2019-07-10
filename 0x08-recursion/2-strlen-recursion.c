#include "holberton.h"

/**
 * _puts_recursion - prints a string, followed by a new line.
 *
 * @s: is a pointer to a char array
 *
 * Return: Returns the transformed pointer
 *
**/

void _print_rev_recursion(char *s)
{

if (*s == 0)
{
return;
}

s++;
_print_rev_recursion(s);
s--;
_putchar(*s);

}
