#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

#define MAX_COMMAND 50

extern char **environ;
void commandExec(char *args[], char *program_name);
int exit_checker(char *line);
void execAbsolute(char *args[], char *program_name);
void execPath(char *args[], char *program_name);

#endif
