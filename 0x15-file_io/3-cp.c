#include"main.h"
#define BUFFER_SIZE 1024
/**
 * exit_with_error - exit with error status
 * @code: represents the exit code
 * @format: pointer to constant character string
 * @arg: pointer to a constant character string
 */
void exit_with_error(int code, const char *format, const char *arg)
{
	dprintf(STDERR_FILENO, format, arg);
	exit(code);
}
/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: size of array
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t bytesRead, bytesWritten;
	char buffer[BUFFER_SIZE];
	const char *file_from = argv[1];
	const char *file_to = argv[2];

	if (argc != 3)
		exit_with_error(97, "Usage: cp file_from file_to\n", NULL);
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		exit_with_error(98, "Error: Can't read from file %s\n", file_from);
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
		exit_with_error(99, "Error: Can't write to %s\n", file_to);
	while ((bytesRead = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytesWritten = write(fd_to, buffer, bytesRead);
		if (bytesWritten == -1)
			exit_with_error(99, "Error: Can't write to %s\n", file_to);
	}
	if (bytesRead == -1)
		exit_with_error(98, "Error: Can't read from file %s\n", file_from);
	if (close(fd_from) == -1)
		exit_with_error(100, "Error: Can't close fd %s\n", file_from);
	if (close(fd_to) == -1)
		exit_with_error(100, "Error: Can't close fd %s\n", file_to);
	return (0);
}
