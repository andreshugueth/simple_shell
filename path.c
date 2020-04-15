#include "holberton.h"
/**
 * pathcheck - checks for executables on the PATH
 * @name: command that I want to execute
 * Return: name if I tiped the absolute path or the command if don't
 */
char *pathcheck(char *name)
{
	char *aux, *path, *check, *target;
	int size, total_s;
	struct stat buf;

	if (name == NULL)
		return (NULL);

	size = _strlen(name);

	check = _getenv("PATH");
	target = malloc(sizeof(check) * _strlen(check));
	target = _strcpy(target, check);
	path = strtok(target, ":");
	while (path != NULL)
	{
		total_s = _strlen(path) + size + 2;
		aux = malloc(total_s);
		aux = _strcpy(aux, path);
		aux = _strcat(aux, "/");
		aux = _strcat(aux, name);

		if (stat(aux, &buf) == 0 && buf.st_mode & X_OK)
		{
			free(target);
			return (aux);
		}

		path = strtok(NULL, ":");
		free(aux);
	}
	return (NULL);
}
