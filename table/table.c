#include <stdio.h>
#include <ctype.h>
void table(int n);

int main(void)
{
	int input;

	printf("\nEnter a number: ");
	scanf("%d", &input);

	table(input);

	return (0);
}

void table(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		int j;

		printf("\nNumber %d multiplication table", i);
		printf("\n\u2304\n");
		for (j = 0; j <= 10; j++)
		{
			int result = i * j;

			printf("%d * %d = %d", i, j, result);
			putchar('\n');
		}
		putchar('\n');
	}
}
