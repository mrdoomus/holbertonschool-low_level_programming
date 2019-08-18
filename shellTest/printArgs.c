#include <stdio.h>

int main(int ac, char **av)
{
	int i;

	while (av[i])
	{
		printf("%s\n", av[i]);
		i++;
	}

return (0);
}
