#include "main.h"

/**
 * exit_checker - Checks if the user entered the 'exit' command.
 * @line: User input.
 * Return: 1 if the user entered the 'exit' command, 0 otherwise.
 */
int exit_checker(char *line)
{
	size_t i;

	/* Checks if the first 4 characters match 'exit' */
	for (i = 0; i < 4; i++)
	{
		if (line[i] != "exit"[i])
			break;
	}
	if (i == 4 && line[4] == '\0')
		return (1);
	else
		return (0);
}
