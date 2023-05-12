#include <stdio.h>
#include <unistd.h>

int main(void)
{
	pid_t pid, my_pid;

	printf("Before fork\n");
	pid = fork();

	if(pid == -1)
	{
		perror("Error:");
		return (1);
	}
	printf("After fork\n");
	my_pid = getpid();
	printf("My pid is %u\n", my_pid);

	return (0);
}
