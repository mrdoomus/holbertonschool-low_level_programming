#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - check the code for Holberton School students.
 *
 * @n: n is a variable name
 *
 * Return: Always 0.
 */
void print_to_98(int n)
{
int c;

if (n == 0 || n == 98)
{
if (n == 98)
printf("98\n");
else
{
for (c = n; c <= 98; c++)
{
printf("%d, ", c);
if (c == 98)
printf("%d\n", c);
}
}
}
if (n > 98)
{
for (c = n; c >= 98; c--)
{
printf("%d, ", c);
if (c == 98)
printf("%d\n", c);
}
}
if (n < 98 && n != 0)
{
for (c = n; c <= 98; c++)
{
printf("%d, ", c);
if (c == 98)
printf("%d\n", c);
}
}
}
