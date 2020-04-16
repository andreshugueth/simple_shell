# simple_shell Project

## Summary
- [Description](https://github.com/JParrales/Readme_Styles#description)
- [Installing](https://github.com/JParrales/Readme_Styles#installing)
- [Files](https://github.com/JParrales/Readme_Styles#files)
- [Examples](https://github.com/JParrales/Readme_Styles#examples)
- [Authors](https://github.com/authors/Readme_Styles#examples)

## Description
 This is a **Simple Shell** Repository

## Installing

### Requirements
- All the files are to be compiled on an Ubuntu 14.04 LTS
- gcc 4.8.4

### Clone repository:

``
git clone https://github.com/andreshugueth/simple_shell.git
``

``
cd simple_shell
``
### Compiling program:

`gcc -Wall -Werror -Wextra -pedantic *.c -o hsh`

## Files:

| File | Description |
| ------ | ------ |
| _getenv.c | get the enviroment information. |
| _putchar.c | writes character. |
| _strcat.c | concatenates two strings. |
| _strcmp.c | string comparison. |
| _strcpy.c | copy string. |
| _strlen.c | length of string. |
| checkline.c | checks path. |
| errors.c | tell the user that there no such file or directory. |
| forkprocess.c | executes the command typed by user. |
| holberton.h | static library. |
| main.c | main function - excute the shell.|
| parse_line.c | separate line into tokens. |
| path.c | checks for the command if there is any file matching on the **PATH**. |
| prompt.c | displays the $: where the user can type. |
| readline.c | reads the line that the used typed. |

## Examples:

- **Interactive mode** 

`./hsh ` *-execution-*

`$:` *-program started-*

`$:  /bin/ls`  *-comand-*

Result:
```
AUTHORS    _putchar.c  _strcpy.c    checkline.c    holberton.h  parse_line.c  readline.c
README.md  _strcat.c   _strlen.c    errors.c       hsh          path.c
_getenv.c  _strcmp.c   built_ins.c  forkprocess.c  main.c       prompt.c
```


## Authors  
[@Andres Hugueth - Github :octocat:](https://github.com/andreshugueth) - [@Jose Parrales - Github :octocat:](https://github.com/JParrales)