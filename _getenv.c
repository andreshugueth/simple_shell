#include "holberton.h"
/**
 * _getenv - get the env information
 * @name: Name of the env var that I want information about
 *
 * Return: string information on succeed/ NULL on failure
 */
char *_getenv(char *name)
{
	char **env;
	char *ptr;
	char *cmp;

	for (env = environ; *env != NULL; env++)
	{
		for (ptr = *env, cmp = name; *ptr == *cmp; ptr++, cmp++)
		{
			if (*ptr == '=')
				break;
		}
		if ((*ptr == '=') && (*cmp == 0))
		{
			return (ptr + 1);
		}
	}
	return (NULL);
}
