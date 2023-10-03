#include"main.h"
/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output
 * @filename: pointer to the filename
 * @letters: number of letters it should read and print
 * Return: 0 or 1
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t readBytes;
	FILE *file = fopen(filename, "r");

	if (filename == NULL)
		return (0);
	if (file == NULL)
		return (0);
	buffer = (char *)malloc(letters + 1);
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}
	readBytes = fread(buffer, sizeof(char), letters, file);
	if (readBytes < 0)
	{
		fclose(file);
		free(buffer);
		return (0);
	}
	fclose(file);
	if (write(STDOUT_FILENO, buffer, readBytes) != readBytes)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	return (0);
}
