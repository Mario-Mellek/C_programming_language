#include <stdio.h>


int main(void)
{
int n = 98;
int *p;

p = &n;

*p = 200;

printf("n %d\n", n);
printf("p %p", p);

   return (0);
}
