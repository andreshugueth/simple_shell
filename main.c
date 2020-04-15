#include "holberton.h"
/**
 * main - shell project
 * Return: always 0
 *
 */
int main(void)
{
	if (isatty(STDIN))
		prompt(1);
	else
		prompt(0);
	return (0);
}
