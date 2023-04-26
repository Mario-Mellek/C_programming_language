#include <stdio.h>
#include <unistd.h>

int main(void)
{
	pid_t child_pid, my_pid;

	child_pid = fork();

	if(child_pid == -1)
	{
		perror("Error:");
		return (1);
	}
	printf("After fork\n");
	my_pid = getpid();
	printf("My pid is %u\n", my_pid);
	if (child_pid == 0)
	{
		printf("Child process: %u\n", child_pid);
	}
	else
	{
		printf("Parent process: %u\n", child_pid);
	}
	printf("child_pid is %u\n", child_pid);

	return (0);
}
