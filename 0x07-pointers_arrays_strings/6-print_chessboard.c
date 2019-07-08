#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring.
 *
 * @s: is a pointer to a char
 * @accept: is a pointer to a char
 *
 * Return: Returns the transformed pointer
 *
**/

void print_chessboard(char (*a)[8])
{
int i, j;

for (i = 0; i < 8; i++)
{
	for (j = 0; j < 8; j++)
		_putchar(a[i][j]);
	_putchar('\n');
}
}
