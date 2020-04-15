#include "holberton.h"
/**
 * forkprocess - execute typed command
 * @new_string: array with arguments
 * @command: command that is going to execute
 * Return: 0 for father and son executes the command
 *
 */
int forkprocess(char *command, char **new_string)
{
	pid_t child_pid, pid;
	int status;

	if (command == NULL)
	{
		_error();
		return (1);
	}

	child_pid = fork();

	if (child_pid == -1)
	{
		perror("Error: fork failure");
		exit(EXIT_FAILURE);
	}
	if (child_pid == 0)
	{
		if (execve(command, new_string, environ) == -1)
			perror("Error: execve");
		exit(EXIT_FAILURE);
	}
	else
	{
		pid = wait(&status);
		if (pid < 0)
		{
			perror("Wait");
			exit(EXIT_FAILURE);
		}
		wait(NULL);
	}

	return (0);
}
