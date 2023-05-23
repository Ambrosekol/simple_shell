#include "header.h"
/**
 * execfun - function creates paths and check
 * @args: double pointer to args
 * @progname: pointer to program name
 * Return: int of status for success or fail
 */
int execfun(char **args, char *progname)
{
	int status;
	char path[20] = PATH;

	/**strcpy(path, PATH);**/
	if ((int) strcspn(args[0], "/") == 0)
	{
		status = execve(args[0], args, environ);
	}
	else
	{
		strcat(path, "/");
		strcat(path, args[0]);
		status = execve(path, args, environ);
	}
	if (status == -1)
	{
		if (errno == ENOENT)
		{
			fprintf(stderr, "%s: %d: %s: not found\n", progname, errno, args[0]);
			fflush(stderr);
		}
		else
			perror("execve");
		exit(EXIT_FAILURE);
	}
	return (status);
}
