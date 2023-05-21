#include "header.h"
/**
  * main - start of program
  * @argc: argument count
  * @argv: argument vector
  * Return: 0 success otherwise false
  */
int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		printf("Usage: %s [file]\n", argv[0]);
		return (1);
	}
	if (isatty(STDIN_FILENO))
	{
		handleInteractiveMode(argv);
	}
	else
	{
		handleBatchMode(argv);
	}
	return (0);
}
