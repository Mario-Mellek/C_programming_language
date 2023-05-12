#include "main.h"
#include <stdio.h>

int counting(void)
{
	char name[20];
	int length;
	printf("\nEnter your name: ");
	scanf("%s%n", name, &length);
	printf("\nYour name is (%s) that consists of (%d) charachters\n\n", 
			name, length);
}
