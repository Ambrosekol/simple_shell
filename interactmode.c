#include "header.h"
/**
 * handleInteractiveMode - function that reads from console
 * @argv: pointer to array of args
 * Return: void
 */
void handleInteractiveMode(char *argv[])
{
	char *command;
	size_t wrn;
	ssize_t wrdcnt;
	/**int status;**/

	wrn = 0;
	command = NULL;
	/**command = malloc(1024);**/
	/**if (command == NULL)**/
		/**printf("error in malloc\n");**/
	while (1)
	{
		printf("$ ");
		while ((wrdcnt = getline(&command, &wrn, stdin)) != EOF)
		{
			if (wrdcnt <= 0)
			{
				printf("\n");
				free(command);
				break;
			}
			if (wrdcnt != EOF)
			{
				command[strcspn(command, "\n")] = '\0';
				if (strcmp(command, "exit") == 0)
					break;
				/**status = **/
				execute_command(command, argv[0]);
			}
		}
	}
	free(command);
}
