#include "holberton.h"
/**
 * _handler - handle ^C
 * @num: response of signal
 * Return: void
 */
void _handler(int num)
{
	if (num == SIGINT)
	{
		write(STDOUT_FILENO, " I won't die!\n", 14);
	}
}

