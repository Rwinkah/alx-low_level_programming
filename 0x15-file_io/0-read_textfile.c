#include "main.h"


/**
 * read_textfile - read a text and file and print to standard output
 *
 * @filename: name of the file
 * @letters: number of chracters to read and print
 *
 * Return: ssize_t
 **/


ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t ans;
	ssize_t test_read;
	ssize_t fd = open(filename, O_RDONLY, 00777);

	buf = malloc(letters);

	if (!filename || !buf)
	{
		return (0);
	}
	test_read = read(fd, buf, letters);
	if (test_read <= 0)
	{
		return (0);
	}
	buf[letters] = '\0';
	ans = write(STDOUT_FILENO, buf, test_read);
	if (!ans || ans < 0)
	{
		return (0);
	}

	free(buf);
	close(fd);
	return (ans);
}
