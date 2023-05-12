#include "main.h"

/**
 * main - A UNIX command line interpreter.
 * @argc: argument count (not used)
 * @argv: argument vector storing the program name at 0 index
 * Return: 0 when succesful
 */
int main(int __attribute__((unused)) argc, char **argv)
{
	size_t j, len = 0;
	char *token, *line = NULL;
	char *args[MAX_COMMAND / 2 + 1];
	ssize_t read;
	int interactive = isatty(STDIN_FILENO);

	while (1)
	{
		j = 0;
		if (interactive)
		{/*The Prompt being flushed to appear on every submission*/
		printf("\033[32mSimple-Shell$\033[0m ");
		fflush(stdout);
		}
		/*Reads user input*/
		read = getline(&line, &len, stdin);
		if (read == -1)
		{
			break;
		}
		token = strtok(line, " ");
		while (token != NULL && j < MAX_COMMAND / 2)
		{
			args[j++] = token;
			token = strtok(NULL, " ");
		}
		args[j] = NULL;
		line[read - 1] = '\0';
		if (j > 0) /*Sets the 1st argument to input, NULL terminated*/
			args[0] = args[0];
		else
			args[0] = line;
		if (exit_checker(line))
			break;
		commandExec(args, argv[0]);
	}
	free(line);
	exit(EXIT_SUCCESS);
}

