#include"main.h"
/**
 * read_textfile - reads a text file and prints it to the
 * POSIX standard output
 * @filename: name of text file
 * @letters: number of letters
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t bytesRead;
	FILE *file;

	if (filename == NULL)
		return (0);
	file = fopen(filename, "r");
	if (file == NULL)
		return (0);
	buffer = (char *)malloc(letters + 1);
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}
	bytesRead = fread(buffer, sizeof(char), letters, file);
	if (bytesRead < 0)
	{
		fclose(file);
		free(buffer);
		return (0);
	}

	fclose(file);
	if (write(STDOUT_FILENO, buffer, bytesRead) != bytesRead)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	return (bytesRead);
}
