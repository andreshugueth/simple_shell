#include "holberton.h"
/**
 * checkline - checks if absolute path
 * @argument: argument to be check
 *
 * Return: 0 if absolute path, 1  if I need to look for env
 */
int checkline(char *argument)
{
	int i, size, status;
	struct stat buf;

	size = _strlen(argument);

	status = 1;
	for (i = 0; i <= size; i++)
	{
		if (argument[i] == '/')
		{
			if (stat(argument, &buf) == 0 && buf.st_mode & X_OK)
			{
				status = 0;
			}
		}
	}
	return (status);
}
