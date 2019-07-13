#include <stdio.h>

/**
 * main - Prints the program name
 *
 * @argc: Number of arguments
 * @argv: Value of arguments
 *
 * Return: Returns an int.
**/

int main(int argc, char *argv[])
{

int pos = argc - argc;

printf("%s\n", argv[pos]);

return (0);
}
