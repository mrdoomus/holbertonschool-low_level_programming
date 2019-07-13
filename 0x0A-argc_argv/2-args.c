#include <stdio.h>

/**
 * main - Prints every argument's value followed by a new line
 *
 * @argc: Number of arguments
 * @argv: Value of arguments
 *
 * Return: Returns an int
**/

int main(int argc, char *argv[])
{

int i;
for (i = 0; i < argc; i++)
	printf("%s\n", argv[i]);

return (0);
}
