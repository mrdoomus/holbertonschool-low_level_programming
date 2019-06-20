#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;
	char lower;

	for (number = 0; number <= 9; number++)
	{
	putchar ((number % 10) + '0');
	}
	for (lower = 'a'; lower <= 'f'; lower++)
	{
	putchar (lower);
	}
	putchar ('\n');
	return (0);
}
