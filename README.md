# Simple Shell Project

This is a simple shell implementation written in C. The shell provides a basic command-line interface for users to interact with the operating system.

## Features
- Execute commands: Users can enter commands to be executed by the shell.
- Built-in commands: The shell supports a few built-in commands, such as cd to change directory and exit to exit the shell.
- Handling of external commands: The shell can execute external programs by forking a child process and using execve() to run the command.


# Getting Started

### Clone the repository:
     $ git clone https://github.com/your-username/simple-shell.git
### Compile the source code:
     $ cd simple-shell
     $ gcc -Wall -Werror -Wextra -pedantic *.c -o simple_shell
### Give Simple_shell execute permission using this command
     $ chmod 755 Simple_shell
### Run the shell
     $ ./simple_shell
### You can now start entering commands in the shell and explore its features.
### File broken down into different segments
- Code for handling parent functions
- Interactive function
- Child processing
- Command execution
- Error printing was handled using errno
# Usage

## The shell supports the following features and commands:
- Entering a command: Simply type a command and press Enter to execute it.
- Built-in commands:
-     cd [directory]: Change the current working directory.
-     ls: Lists items in a directory
-     rm: removes a file or directory with appropriate flags (-frv)
-     cp: copies a file from one location to another specified directory
-     And other basic linux commands
- exit: Exit the shell.

# Examples

Here are a few examples of using the shell:
-     $ ls -l
-     $ cd /path/to/directory

# Contributing

Contributions are welcome! If you find any issues or want to add new features to the shell, feel free to open an issue or submit a pull request
