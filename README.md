# Simple Shell Project

This is a simple shell implementation written in C. The shell provides a basic command-line interface for users to interact with the operating system.

## Features
- Execute commands: Users can enter commands to be executed by the shell.
- Built-in commands: The shell supports a few built-in commands, such as cd to change directory and exit to exit the shell.
- Handling of external commands: The shell can execute external programs by forking a child process and using execve() to run the command.


# Getting Started

- Clone the repository:
### $ git clone https://github.com/your-username/simple-shell.git
- Compile the source code:
### $ cd simple-shell
### $ gcc -Wall -Werror -Wextra -pedantic *.c -o simple_shell
- Run the shell
### $ ./simple_shell
- You can now start entering commands in the shell and explore its features.
