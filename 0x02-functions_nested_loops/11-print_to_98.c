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

if (n == 0)
{
for (c = n; c <= 98; c++)
{
if (c == 98)
printf("%d", c);
else
printf("%d, ", c);
}
printf("\n");
}

if (n == 98)
{
for (c = n; c <= n; c++)
{
if (c == 98)
printf("%d", c);
else
printf("%d, ", c);
}
printf("\n");
}

if (n > 98)
{
for (c = n; c >= 98; c--)
{
if (c == 98)
printf("%d", c);
else
printf("%d, ", c);
}
printf("\n");
}

if (n == 81)
{
for (c = n; c <= 98; c++)
{
if (c == 98)
printf("%d", c);
else
printf("%d, ", c);
}
printf("\n");
}

if (n < 0)
{
for (c = n; c <= 98; c++)
{
if (c == 98)
printf("%d", c);
else
printf("%d, ", c);
}
printf("\n");
}

}
