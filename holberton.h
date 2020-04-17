#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <signal.h>

#define STDIN 0
#define DELIMITERS " \n\t\r\a"

void prompt(int c);
char *readline(void);
char **parse_line(char *line);
int forkprocess(char *command, char **new_string);
char *pathcheck(char *name);
char *_getenv(char *name);
char *__findenv(const char *name, int *offset);
int checkline(char *argument);
int _error(void);
void _handler(int num);

/* usables */

int _strlen(char *s);
char *_strcpy(char *des, char *src);
char *_strcat(char *des, char *src);
int _putchar(char c);
int _strcmp(char *s1, char *s2);
/* environ */
extern char **environ;

#endif

