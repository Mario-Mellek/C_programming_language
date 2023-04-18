#include <stdio.h>

int main(void)
{
	char c, n;
	char *p;

	c = 'M';
	p = &c;

	printf("Address of c: %p\n", &c);
	printf("Address of n: %p\n", &n);
	printf("pointer size of p: %lu\n", sizeof(p));
	printf("Address of pointer p: %p\n", &p);
	printf("-------------------------------------");
	putchar('\n');
	printf("Address of c: %p\n", &c);
	printf("value of pointer p: %p\n", p);

	printf("-------------------------------------");

	*p = 'A';


	printf("\nValue of c has changed through the pointer from M to %c\n", c);


	return (0);
}
