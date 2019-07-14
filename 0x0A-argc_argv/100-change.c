#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the sum of n arguments
 *
 * @argc: Number of arguments
 * @argv: Value of arguments
 *
 * Return: Returns an int
**/

int main(int argc, char *argv[])
{

int i = 0, j = 0, k = 0, l = 0, m = 0, sum = 0;
int cents = atoi(argv[1]);

        if (argc == 2)
        {
                if (cents < 0)
                    printf("0\n");
                else
                {
                    if (cents >= 25)
                    {
                            while(cents >= 25)
                            {
                                cents -= 25;
                                i++;
                            }
                    }
                    if (cents >= 10)
                    {
                            while(cents >= 10)
                            {
                                cents -= 10;
                                j++;
                            }
                    }
                    if (cents >= 5)
                    {
                            while(cents >= 5)
                            {
                                cents -= 5;
                                k++;
                            }
                    }
                    if (cents >= 2)
                    {
                            while(cents >= 2)
                            {
                                cents -= 2;
                                l++;
                            }
                    }
                    if (cents >= 1)
                    {
                            while(cents >= 1)
                            {
                                cents -= 1;
                                m++;
                            }
                    }
                    sum = i + j + k + l + m;
                    printf("%d\n", sum);
                }
        }
        else
        {
                printf("Error\n");
                return (1);
        }
        
return (sum);
}
