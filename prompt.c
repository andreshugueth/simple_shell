#include "holberton.h"
/**
 * prompt - executes the process of the shell
 * read
 * parse
 * execute
 * @c: case of issaty
 * Return: void
 */
void prompt(int c)
{
	int status;
	char *line;
	char *command;
	char **separate;

	do {
		if (c == 1)
			write(1, "$: ", 4);
		status = 1;
		line = readline();
		if (line == NULL)
		{
			if (c == 1)
				_putchar('\n');
			break;
		}
		if (line[0] != '\n')
		{
			separate = parse_line(line);
			if (*separate == NULL)
			{
				free(separate);
				free(line);
				continue;
			}
			status = checkline(separate[0]);
			if (status == 1)
			{
				command = pathcheck(separate[0]);
				forkprocess(command, separate);
				free(command);
			}
			else if (status == 0)
			{
				forkprocess(separate[0], separate);
			}
			free(separate);
		}
		free(line);
	} while (1);
}

