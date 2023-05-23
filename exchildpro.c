#include "header.h"
/**
 * execute_child_process - executes child process
 * @args: double pointer to array of args
 * @progname: pointer to progname
 * Return: -1 on failure, otherwise child process ID
 */
int execute_child_process(char **args, char *progname)
{
	pid_t pid;

	pid = fork();
	if (pid == -1)
	{
		perror("fork");
		return (-1);
	}
	if (pid == 0)
	{
		execfun(args, progname);
		perror(progname);
		exit(EXIT_FAILURE);
	}
	return (pid);
}
