#include <stdio.h>
#include <unistd.h>

int main(void)
{
	pid_t my_pid, p_pid;
	p_pid = getppid();
	my_pid = getpid();
	printf("Parent PID: %u\n", p_pid);
	printf("PID: %u\n", my_pid);
	return (0);
}
