#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
    int fd[2];
    if (pipe(fd) == -1)
    {
        perror("Pipe");
        return (1);
    }

    int id = fork();
    if (id == 0)
    {
        int x = 5;
        close(fd[0]);
        write(fd[1], &x, sizeof(x));
        close(fd[1]);
    }
    else
    {
        int result;
        close(fd[1]);
        read(fd[0], &result, sizeof(result));
        printf("Result: %d\n", result);
        close(fd[0]);
    }
    return (0);
}