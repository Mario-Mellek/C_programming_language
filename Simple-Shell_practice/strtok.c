#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **split_string(char *string) {
	char **words = NULL;
	char *word = strtok(string, " ");
	int i = 0;

	while (word != NULL)
	{
		words = realloc(words, sizeof(char *) * (i + 1));
		words[i] = word;
		i++;
		word = strtok(NULL, " ");
	}

    return words;
}

int main() {
	char string[] = "This String is for testing purposes only :D";
	char **words = split_string(string);

	for (int i = 0; words[i] != NULL; i++)
	{
		printf("%s\n", words[i]);
	}

	free(words);
	return 0;
}
