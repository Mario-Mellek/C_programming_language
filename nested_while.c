#include <stdio.h>

int main(void)
{
	int i = 0, k;
	
	while (i <= 10)
	{
		k= i - 1;
		printf("%d", i);
		i++;

		
		while (k >= 0)
		{
			printf("%d", k);
			k--;
		}





		putchar('\n');
	}

	return (0);
}
