#ifndef HEADER_H
#define HEADER_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <errno.h>
#define MAX_COMMAND_LENGTH 100
#define PATH "/bin"
int execfun(char **args, char *progname);
int execute_command(char *command, char *);
void handleInteractiveMode(char *argv[]);
void handleBatchMode(char *argv[]);
int execute_child_process(char **args, char *progname);
int wait_child_process(pid_t pid);
#endif
