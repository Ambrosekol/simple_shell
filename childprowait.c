#include "header.h"
/**
 * wait_child_process - function wait for child to finish
 * @pid: child process ID
 * Return: returns the status of child process
 */
int wait_child_process(pid_t pid)
{
	int status;

	waitpid(pid, &status, 0);
	return (status);
}
