#include <stdio.h>

void replace_odd_even(int *arr, size_t size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		if (arr[i] % 2 == 0)
			arr[i] = 0;
		else
			arr[i] = 1;
	}
}

void print_array(int *arr, size_t size)
{
	int i;

	putchar('[');
	for (i = 0; i < size; i++)
	{
		printf("%d", arr[i]);
		if (i < size -1)
			putchar(',');
	}
	putchar(']');
}

void modify_array(int *arr, size_t size, void (*func_ptr)(int *, size_t))
{
	int i;

	if (arr && func_ptr)
		(*func_ptr)(arr, size);
}

int main()
{
	int arr[] = {1,2,3,4,5};
	size_t size = sizeof(arr) / sizeof(int);

	modify_array(arr, size, replace_odd_even);
	print_array(arr, size);
	return (0);
}
