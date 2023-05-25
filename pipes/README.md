## Pipes in c

Pipe is a communication mechanism provided by the operating system to allow
inter-process communication (IPC) between two processes.
It is used for passing data between two processes by acting as a conduit or a channel between them.

pipes are implemented using the pipe() function, which returns a pair of file descriptors (one for reading and one for writing)
which can be used by the two processes to read and write data. One process writes to the write end of the pipe and another process reads from the read end of the pipe.