#include <stdio.h>
#include <unistd.h>

/**
 * main - execve example
 *
 * Return: Always 0.
 */
int main(int ac, char ** av)
{
	int i;
	char *argv[2];

	if (ac != 4)
	{
		printf("Wrong usage, EXITING\n");
		return (-1);
	}

	for (i = 0; i < ac - 1; i++)
		argv[i] = av[i + 1];

    printf("Before execve\n");
    if (execve(argv[0], argv, NULL) == -1)
    {
        perror("Error:");
    }
    printf("After execve\n");
    return (0);
}
