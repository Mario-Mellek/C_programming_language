#include <stdio.h>
#include <unistd.h>

// The environ variable is an array of strings that contains the environment variables
extern char **environ;

int main(void)
{
	char *argv[] = {"/bin/ls", "-l", "/usr/", NULL};

	printf("Before call\n");
	if (execve(argv[0], argv, environ) == -1)
	{
		perror("Error:");
	}
	printf("After call\n");
	return (0);
}
