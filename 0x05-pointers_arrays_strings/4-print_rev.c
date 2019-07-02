#include "holberton.h"

/**
 * print_rev - Swaps integers wih pointers.
 *
 * @*s: is a pointer to a char
 *
 * Return: Always 0.
 */

void print_rev(char *s)
{
/*for (*s = '\0'; *s >= 0; s--)
{
_putchar(*s);

}*/

*s = '\0';

while (*s != 'I')
{
_putchar(*s);
s--;
}
_putchar('\n');
}
