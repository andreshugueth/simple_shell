#include "holberton.h"
/**
 * readline - read the line typed on the prompt
 * Return: typed line
 */
char *readline(void)
{
	char *line = NULL;
	size_t bufsize = 0;
	int num;

	num = getline(&line, &bufsize, stdin);
	if (num == EOF)
	{
		free(line);
		return (NULL);
	}

	return (line);
}
