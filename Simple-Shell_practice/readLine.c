#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *input = NULL;
	size_t i;

	while (1)
	{
		printf("$ ");
		fflush(stdout);
		getline(&input, &i, stdin);
		printf("%s", input);
	}
	free(input);
	return (0);
}
