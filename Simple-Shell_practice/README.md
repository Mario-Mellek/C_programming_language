## PID & PPID
- A process is an instance of an executing program, that has a unique process ID. This process ID is used by many functions and system calls to interact with and manipulate processes.

- getpid.c : A program that prints the current PID
- getppid.c: A program that prints the PID of the parent process.
- maximumPID: A shell script that prints the maximum value a process ID can be.
- av.c: A program that prints all the arguments, without using ac.
- ReadLine.c: A program that prints "$ ", wait for the user to enter a command, prints it on the next line.
- strtok.c: A function that splits a string and returns an array of each word of the string.
<hr>

## Executing a program

- exec.c: The system call execve allows a process to execute another program (man 2 execve). Note that this system call does load the new program into the current process’ memory in place of the “previous” program: on success execve does not return to continue the rest of the “previous” program.
- The environ variable is an array of strings that contains the environment variables
<hr>

## Creating processes

- fork.c: The system call fork (man 2 fork) creates a new child process, almost identical to the parent (the process that calls fork). Once fork successfully returns, two processes continue to run the same program, but with different stacks, datas and heaps.

- forkChild.c: Using the return value of fork, it is possible to know if the current process is the father or the child: fork will return 0 to the child, and the PID of the child to the father.
<hr>

## Wait
wait.c & wait2.c The `wait()` system call suspends execution of the calling process until one of its children terminates.
<hr>

## fork + wait + execve

- fiveChildren.c: program that executes the command ls -l /tmp in 5 different child processes. Each child should be created by the same process (the father). Wait for a child to exit before creating a new child.
<hr>

## Super Simple Shell

- SSshell.c: Using the above, this is a first version of a super simple shell that can run commands with their full path, without any argument.
<hr>

## File Information 
### Stat system Call

- stat.c: The `stat()` system call gets the status of a file. On success, zero is returned. On error, -1 is returned.
- Used to get information about a file. It takes a filename as input and fills a structure of type struct stat with information about the file. The struct stat contains information such as the file size, permissions, owner, group, and timestamps.
- buf is a variable of type struct stat used to store the file info
The members of the struct stat are as follows:

- `st_dev`: ID of device containing file
- `st_ino`: Inode number
- `st_mode`: Protection mode; see also Unix permissions
- `st_nlink`: Number of hard links
- `st_uid`: User ID of owner
- `st_gid`: Group ID of owner
- `st_rdev`: Device ID (if special file)
- `st_size`: Total size, in bytes
- `st_blksize`: Block size for filesystem I/O
- `st_blocks`: Number of 512B blocks allocated
