#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>

extern char **environ;

int main(void)
{
	pid_t pid;
	int status, i;
	char *args[] = {"ls", "-l", "/tmp", NULL};

	for (i = 0; i < 5; i++)
	{
		pid = fork();
		
		if (pid == 0)
		{
			printf("This is child process number: %d\n\n", i+1);
			execve("/bin/ls", args, environ);
			exit(0);
		}
		else if (pid > 0)
		{
			wait(&status);
			printf("Child process %d has terminated with status %d\n\n", i+1, status);
		}
		else
		{
			printf("Fork failed\n");
			exit(1);
		}
	}
	return (0);
}
