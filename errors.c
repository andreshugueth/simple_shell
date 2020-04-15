#include "holberton.h"
/**
 * _error - prints error on the
 * @new_string: argument to be printed
 * Return: Always 0
 */
int _error(void)
{
	write(1, "No such file or directory", 25);
	_putchar('\n');
	return (0);
}
