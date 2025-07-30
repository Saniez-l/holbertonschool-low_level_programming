#include "main.h"

/**
 * append_text_to_file - read text file
 * @filename: file name
 * @text_content: size
 *
 * Return: 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd = 0, charWrite = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		return (-1);
	}

	charWrite = write(fd, text_content, strlen(text_content));
	if (charWrite == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
