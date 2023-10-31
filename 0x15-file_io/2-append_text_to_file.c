#include"main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp;
	ssize_t length, bytesWritten;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	fp = open(filename, O_WRONLY | O_APPEND);
	if (fp == -1)
		return (-1);
	length = strlen(text_content);
	bytesWritten = write(fp, text_content, length);
	if (bytesWritten == -1)
	{
		close(fp);
		return (-1);
	}
	close(fp);
	return (1);
}
