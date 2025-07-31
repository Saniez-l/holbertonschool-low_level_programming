#include "main.h"

/**
 * main - check the code
 *@argc: args
 *@argv: argv
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int fd = 0, fd1 = 0, charRead = 0, charWrite = 0;
	char *buf[1024];
	char *file_from = argv[1];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fd1 = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fd1 == -1)
	{
		close(fd);
		return (0);
	}

	charRead = read(fd, buf, sizeof(buf));
	if (charRead == -1)
	{
		close(fd);
		close(fd1);
		return (0);
	}

	charWrite = write(fd1, buf, charRead);
		if (charWrite == -1)
		{
			close(fd);
			close(fd1);
			return (0);
		}
	if (charRead != charWrite)
	{
		dprintf(STDERR_FILENO, "Can't write to %d\n", fd1);
		exit(99);
	}
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Can't close fd %d\n", fd);
		exit(100);
	}
	if (close(fd1) == -1)
	{
		dprintf(STDERR_FILENO, "Can't close fd %d\n", fd1);
		exit(100);
	}

	return (0);
}

