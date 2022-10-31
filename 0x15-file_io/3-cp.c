#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - copies the content of a file to another file.
 * @argc: number of arguments
 * @argv: pointer to content of arguments
 * Return: 1 to succes
 */

int main(int argc, char *argv[])
{
	int fdo1, fdo2, fdr, cl, cl2;
	char arr[1024], e1[] = "Error: Can't read from file";
	char e2[] = "Error: Can't write from file";

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fdo1 = open(argv[1], O_RDONLY);
	if (fdo1 < 0)
	{
		dprintf(STDERR_FILENO, "%s %s\n", e1, argv[1]);
		exit(98);
	}
	fdo2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fdo2 < 0)
	{
		dprintf(STDERR_FILENO, "%s %s\n", e2, argv[2]);
		exit(99);
	}
	while ((fdr = read(fdo1, arr, 1024)) > 0)
	{
		if (write(fdo2, arr, fdr) != fdr)
		{
			dprintf(STDERR_FILENO, "%s %s\n", e2, argv[2]);
			exit(98);
		}
	}
	cl = close(fdo1);
	cl2 = close(fdo2);
	if ((cl == -1) || (cl2 == -1))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", argv[1]);
		exit(100);
	}
	return (0);
}
