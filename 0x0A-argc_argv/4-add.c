#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

int i;
int sum;

for (i = 1; i < argc; i++)
	{
		if (*argv[i] >= 48 && *argv[i] <= 57)
			sum += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}
printf ("%d\n", sum);
return (0);

}
