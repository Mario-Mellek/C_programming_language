#include <stdio.h>

int main(void)
{
	int a, b;
	printf("Enter first number: ");
	scanf("%d", &a);
	printf("Enter second number: ");
	scanf("%d", &b);

	printf("%d + %d", a, b);
	int result = (a + b);
	printf("\n\nTotal is = %d\n\n", result);
}
