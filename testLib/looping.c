#include "main.h"
#include <stdio.h>

int looping(void)
{
	int loop;
	printf("Enter how mant loops?");
	scanf("%d", &loop);
	for (int i = 0 ; i <= loop ; i++){
		printf("\nLoop number: %d\n", i);
	}
	return (0);
}
