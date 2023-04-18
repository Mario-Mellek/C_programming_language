#include <stdio.h>



int set_bit(unsigned long int *n, unsigned int index)
{
	if (index <= 64)
	{
		*n |= (1 << index);
		return *n;
	}else
	{
		return (-1);
	}
}


/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned long int n;

    n = 1024;
    set_bit(&n, 5);
    printf("%lu\n", n);
    n = 0;
    set_bit(&n, 10);
    printf("%lu\n", n);
    n = 98;
    set_bit(&n, 0);
    printf("%lu\n", n);
    return (0);
}
