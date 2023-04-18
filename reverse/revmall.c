#include <stdio.h>
#include <stdlib.h>

char* reverse(char* s);

int main(void)
{
	char *ptr = "hello";
	char *reversed = reverse(ptr);
	printf("Before the call %s\n", ptr);
	printf("After the call %s\n", reversed);
	free(reversed);
	return (0);
}

char* reverse(char* s)
{
	int i, j;
	char *reversed = (char *)malloc(sizeof(char) * 5);

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	j = -1;
	while (i >= 0)
	{
		reversed[j] = s[i];
		i--;
		j++;
	}
	return (reversed);
}
