#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the result of the multiplication of 2 numbers
 *
 * @argc: Number of arguments
 * @argv: Value of arguments
 *
 * Return: Returns an int
**/

int main(int argc, char *argv[])
{

int sum = 0;

if (argc == 3)
	{
	sum += (atoi(argv[(argc - argc) + 1]) * atoi(argv[(argc - argc) + 2]));
	printf("%d\n", sum);
	return (0);
	}
else
	{
	printf("Error\n");
	return (1);
	}
}
