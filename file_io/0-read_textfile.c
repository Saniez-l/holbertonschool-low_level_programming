#include "main.h"
/**
 * read_textfile - read text file
 * @filename: file name
 * @letters: size
 *
 * Return: charWrite
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int fd;
	ssize_t charRead, charWrite;

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	charRead = read(fd, buffer, letters);
	if (charRead == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	charWrite = write(STDOUT_FILENO, buffer, charRead);

	if (charWrite != charRead || charRead == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);
	return (charWrite);
}
