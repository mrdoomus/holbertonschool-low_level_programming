#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int ac, char **av)
{
	char *token = strtok(av[1], av[2]);
	
	if (ac != 3)
	{
		printf("Not enough args, Usage: %s string delim\n", av[0]);
		exit(EXIT_FAILURE);
	}
	
	while (token != NULL)
	{
		printf ("%s\n", token);
		token = strtok(NULL, av[2]);
	}

exit(EXIT_SUCCESS);
}
