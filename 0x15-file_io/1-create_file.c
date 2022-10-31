#include "main.h"
#define FAIL -1
#define SUCCESS 1
/**
 * create_file - create a file
 * @filename: file to create
 * @text_content: string to copy in filename
 * Return: 1 if succes or -1 if fail
 */

int create_file(const char *filename, char *text_content)
{
	int fd, fdw, len = 0;

	if (filename == NULL)
		return (FAIL);
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd < 0)
		return (FAIL);
	if (text_content == NULL)
		return (SUCCESS);
	while (text_content[len])
		len++;
	fdw = write(fd, text_content, len);
	if (fdw < 0)
		return (FAIL);
	close(fd);
	return (SUCCESS);
}
