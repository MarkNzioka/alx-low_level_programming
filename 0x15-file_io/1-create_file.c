#include"main.h"
/**
 * create_file - creates a file
 * @filename: pointer to filename
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int op;
	ssize_t written_bytes;

	if (filename == NULL)
		return (-1);
	op = open(filename, O_WRONLY | O_CREAT | O_TRUNC
			, S_IRUSR | S_IWUSR);
	if (op == -1)
		return (-1);
	if (text_content != NULL)
	{
		written_bytes = write(op, text_content, strlen(text_content));
		if (written_bytes == -1)
		{
			close(op);
			return (-1);
		}
	}
	close(op);
	return (1);
}
