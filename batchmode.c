#include "header.h"
/**
 * handleBatchMode - function that treats batch
 * @argv: pointer to array of arguments
 * Return: void
 */
void handleBatchMode(char *argv[])
{
	char *command;
	size_t wrn;
	int status;

	wrn = 0;
	command = malloc(1024);
	if (command == NULL)
		printf("error in malloc\n");

	if (getline(&command, &wrn, stdin) != 0)
	{
		command[strcspn(command, "\n")] = '\0';
		status = execute_command(command, argv[0]);
		if (status == -1)
			printf("%s: I say no such file exist.\n", argv[0]);
		free(command);
		exit(127);
	}
	free(command);
}
