#include "header.h"
/**
  * execute_command - main function to execute cmd
  * @command: command to execute
  * @progname: name of program
  * Return: returns -1 on failure
  */
int execute_command(char *command, char *progname)
{
	char *args[8];
	char *token;
	int i, pid;
	int status, exit_status;

	token = strtok(command, " \n\t");
	i = 0;
	while (token != NULL && i < 8)
	{
		token[strcspn(token, "\n")] = '\0';
		args[i] = token;
		token = strtok(NULL, " \n\t");
		i++;
	}
	args[i] = NULL;
	if (args[0] == NULL)
		return (0);
	pid = execute_child_process(args, progname);
	if (pid == -1)
		return (-1);
	status = wait_child_process(pid);
	if (WIFEXITED(status))
	{
		exit_status = WEXITSTATUS(status);
		return (exit_status);
	}
		return (-1);
}
