#include <stdio.h>
#include <stdbool.h>
#include <time.h>

int main(void)
{
    clock_t start, end;
    double timeTaken;
    start = clock();
    long unsigned i = 1;

    while (true)
    {
        printf("%ld\n", i);
        i += 1;
        if (i == 1000001)
        {
            break;
        }
    }
    end = clock();
    timeTaken = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Time taken: %f seconds\n", timeTaken);
    return (0);
}