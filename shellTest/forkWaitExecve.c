#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main (void)
{
	int i;
	pid_t child, parent;
	char *argv[] = {"/bin/ls", "-l", "/tmp/"};

	for (i = 0; i < 5; i++)
	{
		if (fork() == 0)
		{
			child = getpid();
			parent = getppid();
			printf("[child]: PID %d, [parent]: %d\n", child, parent);
			if (execve(argv[0], argv, NULL) == -1)
				perror("ERROR");
		}
	}
	for (i = 0; i < 5; i++)
		wait (NULL);
return (1);
}
