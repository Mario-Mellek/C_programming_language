#include <stdio.h>

char* reverse(char* s);

int main(void)
{
	char text[] = "hello";
	char *ptr = text;
	printf("Before the call %s\n", ptr);
	printf("After the call %s\n", reverse(ptr));
	return (0);
}

char* reverse(char* s)
{
	int i, j;
	char temp[5];


	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	j = -1;
	while (i >= 0)
	{
		temp[j] = s[i];
		i--;
		j++;
	}
	s = temp;
	return (s);
}
