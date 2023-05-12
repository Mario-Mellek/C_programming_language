#include <stdio.h>
#include <string.h>

int isPalindrome(char *str, int start, int end);

int main()
{
	char *text = "racecar";
	int len = strlen(text);
	int palindrome = (isPalindrome (text, 0, len - 1));
	if (palindrome)
	{
		printf("\nThe word %s is a palindrome \u2705\n\n", text);
	}
	else
	{
		printf("\nThe word %s is not a palindrome \u274C\n\n", text);
	}
	return (0);
}

int isPalindrome(char *str, int start, int end)
{
	int i;
	for (i = start; i <= end; i++)
	{
		if (str[i] == str[end])
		{
			end --;
		}
		else
		{
			break;
		}
		return (1);
	}
	return (0);
}
