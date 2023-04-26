#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

extern char **environ;
#define MAX_COMMAND 50

void commandExec(char *args[]);

int main(void)
{
	size_t len = 0;
	char *line = NULL;
	char *args[MAX_COMMAND/2+1];
	ssize_t read;

	//invoking an infinite loop
	while (1)
	{
		printf("\033[32mSuper Simple Shell\u0024\033[0m > ");
		fflush(stdout);

		read = getline(&line, &len, stdin);
		if (read == -1)
			break;

		//removes the newline
		line[read-1] = '\0';

		args[0] = line;
		args[1] = NULL;

		commandExec(args);
	}
	free(line);
	return (0);
}

void commandExec(char *args[])
{
	pid_t pid;
	pid = fork();

	if (pid == 0)
	{
		execve(args[0], args, environ);
		exit(0);
	}
	else
	{
		wait(NULL);
	}
}
