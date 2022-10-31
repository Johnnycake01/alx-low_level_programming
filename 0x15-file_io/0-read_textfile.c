#include "main.h"

/**
 * read_textfile - read and prints the content of a file
 * @filename: name of text file
 * @letters: number of characters
 * Return: number of read and printed charaters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int fd, fdr, fdw;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		free(buffer);
		return (0);
	}
	fdr = read(fd, buffer, letters);
	if (fdr < 0)
	{
		free(buffer);
		return (0);
	}
	fdw = write(STDOUT_FILENO, buffer, fdr);
	if (fdw < 0)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(fd);
	return (fdw);
}
