#include "main.h"

/**
 * execAbsolute - Executes a command specified with an absolute path.
 * @args: An array of command-line arguments,
 * where the first argument is the command to execute
 * and subsequent arguments are its arguments.
 * @program_name: The name of the program (used for error messages).
 */

void execAbsolute(char *args[], char *program_name)
{
	pid_t pid = fork(); /*Forks a new process*/

	if (pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	if (pid == 0)
	{
		if (access(args[0], X_OK) == -1)
		{
			perror(program_name);
			exit(EXIT_FAILURE);
		}
		execve(args[0], args, environ); /*Execute in the child process*/
		perror(program_name);
		exit(EXIT_FAILURE);
	}
	wait(NULL); /* Waits for the child to conclude */
}
