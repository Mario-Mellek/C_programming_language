#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(void)
{
	pid_t child_pid;
	int status;

	child_pid = fork();

	if (child_pid == 0)
	{
		printf("This is child process\n");
		exit(0);
	}
	else if (child_pid > 0)
	{	
		wait(&status);
		printf("This is the parent process\n");
		printf("Child process has terminated with status %d\n", status);
	}
	else
	{
		printf("Fork failed\n");
		exit(1);
	}
	return (0);
}
