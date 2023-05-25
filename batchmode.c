#include "header.h"
/**
 * handleBatchMode - function that treats batch
 * @argv: pointer to array of arguments
 * Return: void
 */
void handleBatchMode(char *argv[])
{
	char *command = NULL;
	size_t token = 0;
	ssize_t wrn;
	/**int status;**/

	/**wrn = 0;**/
	while ((wrn = getline(&command, &token, stdin)) != -1)
	{
		if (strcmp(command, "exit") == 0)
		{
			return (0);
		}
		execute_command(command, argv[0]);
	}
	free(command);
}
