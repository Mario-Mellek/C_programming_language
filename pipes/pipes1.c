#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    int fd[2];
    pid_t pid;
    char message[] = "Hello, World";

    if (pipe(fd) == -1)
    {
        perror("Pipe");
        return (1);
    }
    pid = fork();
    if (pid < 0)
    {
        perror("fork");
        return (1);
    }
    if (pid > 0) // parent
    {
        close(fd[0]);
        write(fd[1], message, sizeof(message));
        close(fd[1]);
    }
    else
    {
        close(fd[1]);
        char buff[100];
        read(fd[0], buff, sizeof(buff));
        printf("Piped Message: %s\n", buff);
        close(fd[0]);
    }
    return (0);
}