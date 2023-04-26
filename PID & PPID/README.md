- A process is an instance of an executing program, that has a unique process ID. This process ID is used by many functions and system calls to interact with and manipulate processes.

- getpid.c : A program that prints the current PID
- getppid.c: A program that prints the PID of the parent process.
- maximumPID: A shell script that prints the maximum value a process ID can be.
- av.c: A program that prints all the arguments, without using ac.
- ReadLine.c: A program that prints "$ ", wait for the user to enter a command, prints it on the next line.
- strtok.c: A function that splits a string and returns an array of each word of the string.
<hr>
- Executing a program:

- exec.c: The system call execve allows a process to execute another program (man 2 execve). Note that this system call does load the new program into the current process’ memory in place of the “previous” program: on success execve does not return to continue the rest of the “previous” program.
