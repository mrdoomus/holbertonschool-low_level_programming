#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints opcodes of the main function
 * @argc: Amount og arguments
 * @argv: Value of the arguments
 * Return: Returns an int
**/

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}

return (0);
}
