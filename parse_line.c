#include "holberton.h"
/**
 * parse_line - parses line into tokens
 * @line: line readed by getline
 *
 * Return: array of strings
 */
char **parse_line(char *line)
{
	int i, j;
	char *piece;
	char **new_array;

	for (j = 0; line[j] != '\0'; j++)
	{
	}
	j++;
	new_array = malloc(j * sizeof(char *));
	i = 0;
	piece = strtok(line, DELIMITERS);
	while (piece != NULL)
	{
		new_array[i] = piece;
		i++;
		piece = strtok(NULL, DELIMITERS);
	}
	new_array[i] = NULL;
	return (new_array);
}
