#include"main.h"
/**
 * exit_message - exit with error message
 * @code: integer representing exit code
 * @format: pointer to format string
 * @arg: argument corresponding to % code
 */
void exit_message(int code, const char *format, const char *arg)
{
	dprintf(STDERR_FILENO, format, arg);
	exit(code);
}
/**
 * main - copies the content of a file to another file
 * @argc: number if arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int op_from, op_to;
	ssize_t read_bytes, written_bytes;
	char buffer[BUFFER_SIZE];
	const char *file_from, *file_to;

	if (argc != 3)
		exit_message(97, "Usage: cp file_from file_to\n", NULL);
	file_from = argv[1];
	file_to = argv[2];
	op_from = open(file_from, O_RDONLY);
	if (op_from == -1)
		exit_message(98, "Error: Can't read from file %s\n", file_from);
	op_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (op_to == -1)
		exit_message(99, "Error: Can't write to %s\n", file_to);
	while ((read_bytes = read(op_from, buffer, BUFFER_SIZE)) > 0)
	{
		written_bytes = write(op_to, buffer, read_bytes);
		if (written_bytes == -1)
			exit_message(99, "Error: Can't write to %s\n", file_to);
	}
	if (read_bytes == -1)
		exit_message(98, "Error: Can't read from file %s\n", file_from);
	if (close(op_from) == -1)
		exit_message(100, "Error: Can't close fd %s\n", file_from);
	if (close(op_to) == -1)
		exit_message(100, "Error: Can't close fd %s\n", file_to);
	return (0);
}
