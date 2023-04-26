#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *input = NULL;
	size_t i, j;

	while (1)
	{
		printf("$ ");
		fflush(stdout);
		j = getline(&input, &i, stdin);
		printf("%sContains %ld charachter\n", input, j - 1);
	}
	free(input);
	return (0);
}
