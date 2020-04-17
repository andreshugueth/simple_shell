# Simple_Shell Project :shell:

## Summary :page_with_curl:
- [Description](https://github.com/andreshugueth/simple_shell#description)
- [Installing](https://github.com/andreshugueth/simple_shell#installing)
- [Files](https://github.com/andreshugueth/simple_shell#files)
- [Examples](https://github.com/andreshugueth/simple_shell#examples)
- [Authors](https://github.com/andreshugueth/simple_shell#authors)

## Description :clipboard:
This is a simple shell that can be compiled and executed from the command line of Linux. It contains some of commands of the Linux's Shell.

## Installing :minidisc:

### Requirements :straight_ruler:
- All the files are to be compiled on an Ubuntu 14.04 LTS
- gcc 4.8.4

### Clone repository :page_facing_up:

``
git clone https://github.com/andreshugueth/simple_shell.git
``

``
cd simple_shell
``
### Compiling program :floppy_disk:

`gcc -Wall -Werror -Wextra -pedantic *.c -o hsh`

## Files :open_file_folder:

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

### Interactive mode

**Prototipe**

![enter image description here](https://i.ibb.co/7WCRrLR/No-Interactive-Mode.png)

*-execution-*

`./hsh `

*-program started-*

`$:`

*-comand-*

`$:  /bin/ls`

*-Result-*

```
AUTHORS    _getenv.c   _strcat.c  _strcpy.c  checkline.c  forkprocess.c  hsh     parse_line.c  prompt.c
README.md  _putchar.c  _strcmp.c  _strlen.c  errors.c     holberton.h    main.c  path.c        readline.c
```

### Non-interactive mode

**Prototipe**

![enter image description here](https://i.ibb.co/ZLQM5mW/Interative-Mode.png) 

*-comand | execution-*

`echo "/bin/ls" | ./hsh`

## Authors  :octocat:
[@Andres Hugueth - Github :octocat:](https://github.com/andreshugueth) - [@Jose Parrales - Github :octocat:](https://github.com/JParrales)

<p>For more information about <a href="https://medium.com/@andreshugueth/what-happens-when-you-type-ls-l-in-the-shell-67737939d8e" rel="nofollow">shell_proyect</a>.</p>