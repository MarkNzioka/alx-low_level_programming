#include"main.h"
/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fp;
	ssize_t bytesWritten;

	if (filename == NULL)
		return (-1);
	fp = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fp == -1)
		return (-1);
	if (text_content != NULL)
	{
		bytesWritten = write(fp, text_content, strlen(text_content));
		if (bytesWritten == -1)
		{
			close(fp);
			return (-1);
		}
	}
	close(fp);
	return (1);
}
