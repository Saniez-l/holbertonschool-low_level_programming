#include "main.h"

/**
 * create_file - read text file
 * @filename: file name
 * @text_content: size
 *
 * Return: charWrite
 */
int create_file(const char *filename, char *text_content)
{
	int fd = 0, charWrite = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		return (-1);
	}

	charWrite = write(fd, text_content, strlen(text_content));
	if (charWrite == -1 || fd == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);

}
