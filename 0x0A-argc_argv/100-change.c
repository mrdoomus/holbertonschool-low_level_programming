#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the Minimal Number of Coins for Change
 *
 * @argc: Number of arguments
 * @argv: Value of arguments
 *
 * Return: Returns an int
**/

int main(int argc, char *argv[])
{
int i = 0, j = 0, k = 0, l = 0, m = 0, sum = 0, cents = atoi(argv[1]);
	if (argc == 2)
	{
		if (cents < 0)
			printf("0\n");
		else
			while (cents >= 25)
			{
				cents -= 25;
				i++;
			}
			while (cents >= 10)
			{
				cents -= 10;
				j++;
			}
			while (cents >= 5)
			{
				cents -= 5;
				k++;
			}
			while (cents >= 2)
			{
				cents -= 2;
				l++;
			}
			while (cents >= 1)
			{
				cents -= 1;
				m++;
			}
			sum = i + j + k + l + m;
			printf("%d\n", sum);
	}
	else
		printf("Error\n");
		return (1);

return (sum);
}
