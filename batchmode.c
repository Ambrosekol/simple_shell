#include "header.h"
/**
 * handleBatchMode - function that treats batch
 * @argv: pointer to array of arguments
 * Return: void
 */
void handleBatchMode(char *argv[])
{
	char *command;
	char *token;
	/**size_t wrn;**/
	/**int status;**/

	/**wrn = 0;**/
		command = malloc(1024);
		if (command == NULL)
			printf("error in malloc\n");

		while (fgets(command, sizeof(command), stdin) != NULL)
		{
			token = strtok(command, "\n");
			while (token != NULL)
			{
				token[strcspn(token, "\n")] = '\0';
				execute_command(token, argv[0]);
				token = strtok(NULL, "\n");
			}
		}
			exit(127);
	free(command);
}
