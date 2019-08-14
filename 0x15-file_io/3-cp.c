#include <stdio.h>
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 * Return: Always 0.
**/
int main(int argc, char * argv[])
{
	int fd = 0, fd2 = 0, len = 0;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDOUT_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (argv[1] == NULL)
	{
		dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		exit(98);

	fd2 = open(argv[2], O_CREAT | O_RDWR | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	len = read(fd, buf, 1024);
	len = write(fd2, buf, len);
	if (fd2 == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	close(fd);
	close(fd2);
	return (0);
}
